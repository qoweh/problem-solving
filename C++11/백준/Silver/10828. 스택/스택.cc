#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    stack<int> P;
    string s;

    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "push") {
            cin >> k;
            P.push(k);
        } else if (s == "pop") {
            if (P.empty()) cout << -1 << '\n';
            else {
                cout << P.top() << '\n';
                P.pop();
            }
        } else if (s == "size") {
            cout << P.size() << '\n';
        } else if (s == "empty") {
            cout << P.empty() << '\n';
        } else if (s == "top") {
            if (P.empty()) cout << -1 << '\n';
            else {
                cout << P.top() << '\n';
            }
        }
    }
    return 0;
}