#include "bits/stdc++.h"

using namespace std;

int n;
vector<string> V;

bool cmp(string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    
    int a_sum = 0, b_sum = 0;
    for (char c : a) {
        if ('0' <= c && c <= '9') a_sum += c - '0';
    }
    for (char c : b) {
        if ('0' <= c && c <= '9') b_sum += c - '0';
    }
    if (a_sum != b_sum) return a_sum < b_sum;
    
    return a < b;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        V.push_back(s);
    }
    sort(V.begin(), V.end(), cmp);

    for (auto v : V) {
        cout << v << '\n';
    }

    return 0;
}