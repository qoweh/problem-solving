#include "bits/stdc++.h"

using namespace std;

int n;
map<long long, int> M;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        long long L;
        cin >> L;
        M[L]++;  // 카운트 증가
    }

    int max_count = 0;
    long long result = 0;
    
    for (auto& m : M) {
        if (m.second > max_count 
            || (m.second == max_count && m.first < result)) {
                max_count = m.second;
                result = m.first;
            }
    }

    cout << result;

    return 0;
}