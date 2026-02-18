#include <iostream>
#include <stack>
using namespace std;

stack<int> s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, t[1000010], k;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> t[i];
	for (int i = n-1; i >= 0; i--) {
		k = t[i];
		while (!s.empty() && s.top() <= k) {
			s.pop();
		}
		t[i] = (s.empty()) ? -1: s.top();
		s.push(k);
	}
	for (int i = 0; i < n; i++)
		cout << t[i] << ' ';
	return 0;
}