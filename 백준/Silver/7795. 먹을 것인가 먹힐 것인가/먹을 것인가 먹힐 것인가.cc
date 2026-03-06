#include <iostream>
using namespace std;

int t, n, m;

int main() {
	cin >> t;
	while (t--) {
		int a[20'000] = {};
		cin >> n >> m;
		for (int i = 0; i < n; i++) cin >> a[i];
		
		int res = 0;
		for (int i = 0; i < m; i++) {
			int t;
			cin >> t;
			for (int idx = 0; idx < n; idx++) {
				if (a[idx] > t) res++;
			}	
		}
		cout << res << '\n';
	}
	return 0;
}