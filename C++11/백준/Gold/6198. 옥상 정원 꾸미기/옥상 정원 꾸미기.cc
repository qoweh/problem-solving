#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n, k, res = 0;
    cin >> n;
    stack<int> S;
    while (n--){
        cin >> k;
        while (!S.empty() && S.top() <= k) S.pop();
        res += S.size();
        S.push(k);
    }
    cout << res;
    return (0);
}