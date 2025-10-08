#include "bits/stdc++.h"

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, ans = 0;
    cin >> n >> m;
    deque<int> dq;
    for (int i = 1; i <= n; i++) dq.push_back(i);
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        int idx = find(dq.begin(), dq.end(), x) - dq.begin();
        if (idx <= dq.size() / 2) {
            while (dq.front() != x) {
                dq.push_back(dq.front());
                dq.pop_front();
                ans++;
            }
        } else {
            while (dq.front() != x) {
                dq.push_front(dq.back());
                dq.pop_back();
                ans++;
            }
        }
        dq.pop_front();
    }
    cout << ans;
    
    return 0;
}