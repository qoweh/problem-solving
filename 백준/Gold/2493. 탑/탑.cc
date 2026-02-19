#include <iostream>
#include <stack>

using namespace std;

stack<int> s;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	int arr[500010] = {0};
	int res[500010];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i]; // 탑의 높이는 서로 다름.
	}


	// stack의 역할 : 특정 위치의 왼쪽에서 볼 수 있는 탑의 후보들을 담는 버퍼
	for (int i = 1; i <= n; i++) {
		while (!s.empty() && arr[s.top()] < arr[i]) {
			s.pop();
		}
		res[i] = (s.empty()) ? 0 : s.top(); // s에 push하는 것은 index임.
		s.push(i);
	}

	for (int i = 1; i <= n; i++) cout << res[i] << ' ';	 
	return 0;
}