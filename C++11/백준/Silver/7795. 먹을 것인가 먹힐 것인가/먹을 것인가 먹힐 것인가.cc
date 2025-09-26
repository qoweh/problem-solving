#include "bits/stdc++.h"

using namespace std;

int a, b;
int arr1[20010], arr2[20010];

void f() {
    int p = 0;
    sort(arr1, arr1 + a);
    sort(arr2, arr2 + b);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (arr1[i] > arr2[j]) {
                p++;
            } else break;
        }
    }
    cout << p << '\n';
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        for (int i = 0; i < a; i++) cin >> arr1[i];
        for (int j = 0; j < b; j++) cin >> arr2[j];
        f();
    }
    return 0;
}