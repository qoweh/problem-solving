#include "bits/stdc++.h"
using namespace std;

int n, k;
int w[105], v[105], D[100010];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> w[i] >> v[i];
    for (int i = 1; i <= n; i++) {
        for (int cur_w = k; cur_w >= w[i]; --cur_w) {
            D[cur_w] = max(D[cur_w], D[cur_w - w[i]] + v[i]);
        }
    }

    cout << D[k];
    return 0;
}
