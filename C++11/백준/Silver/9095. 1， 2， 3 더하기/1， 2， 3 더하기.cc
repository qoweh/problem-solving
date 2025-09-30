#include "bits/stdc++.h"

using namespace std;

int k;
int res;

void f(int depth, int cur) {
    if (depth > k) return ;
    else if (cur == k) {
        res++ ;
        return ;
    }
    for (int i = 1; i <= 3; i++) {
        f(depth + 1, cur + i);
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        res = 0;
        cin >> k;
        f(0, 0);
        cout << res << '\n';
    }
    return (0);
}