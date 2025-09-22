#include "bits/stdc++.h"

using namespace std;

int n, S, cnt;
int arr[20];
int chunk[20];

int sum_chunk(int n) {
    int p = 0;
    for (int i = 0; i < n; i++) p += arr[chunk[i]];
    return p;
}

void f(int k) {
    if (k != 0 && sum_chunk(k) == S) {
        cnt++;
    }
    if (k >= n)
        return ;
    int st = 0;
    if (k != 0) st = chunk[k - 1] + 1;
    for (int i = st; i < n; i++) {
        chunk[k] = i;
        f(k + 1);
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> S;
    for (int i = 0; i < n; i++) cin >> arr[i];
    f(0);
    cout << cnt;
    return 0;
}