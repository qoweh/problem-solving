#include <iostream>
using namespace std;

int n, s, arr[20], res;

void f(int idx, int total) {
	if (idx == n) {
		if (total == s) res++;
		return ;
	}
	f(idx + 1, total);
	f(idx + 1, total + arr[idx]);
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> s;
	for (int i = 0; i < n; i++) cin >> arr[i];
	f(0, 0);
	if (s == 0) res--;
	cout << res;
	return 0;
}