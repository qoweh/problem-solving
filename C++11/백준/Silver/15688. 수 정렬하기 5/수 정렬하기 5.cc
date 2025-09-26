#include "bits/stdc++.h"

using namespace std;
int arr[2000010];


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        arr[k + 1000000]++;
    }
    for (int i = -1000000; i < 1000001; i++) {
        while (arr[i + 1000000] > 0) {
            cout << i << '\n';
            arr[i + 1000000]--;
        }
    }
    
    return 0;
}