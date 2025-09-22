#include "bits/stdc++.h"

using namespace std;

int n, m;
vector<int> input;
int arr[8];
bool isused[10001];

void f(int k) {
    if (k == m) {
        for (int i = 0; i < k; i++) cout << arr[i] << ' ';
        cout << '\n';
        return ;
    }
    for (auto iter = input.begin(); iter < input.end(); iter++) {
        if (!isused[*iter]) {
            isused[*iter] = true;
            arr[k] = *iter;
            f(k + 1);
            isused[*iter] = false;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    fill(isused, isused + 8, false);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        input.push_back(p);
    }
    sort(input.begin(), input.end());
    f(0);
    return 0;
}
