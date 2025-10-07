#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p = 1;
    queue<int> Q;

    cin >> n;
    while (p * 2 <= n) p *= 2;
    if (p == n) cout << n;
    else cout << (n - p) * 2;
    return (0);
}