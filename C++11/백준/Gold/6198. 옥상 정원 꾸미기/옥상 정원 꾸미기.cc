#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    stack<int> S;
    long long result = 0;
    for (int i = 0; i < n; i++) {
        while (!S.empty() && S.top() <= h[i]) S.pop();
        result += S.size();
        S.push(h[i]);
    }
    cout << result;
    return 0;
}