#include "bits/stdc++.h"

using namespace std;

long long f1(long a, long b, long c){
    if (b == 1) return (a  % c);
    long long val = f1(a, b / 2, c);
    val = val * val % c;
    if (b % 2 == 0) return val;
    return val * a % c;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    cout << f1(a, b, c) << "\n";
    return 0;
}