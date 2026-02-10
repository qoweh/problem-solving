#include <iostream>
#include <algorithm>
using namespace std;

string arr[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	arr[0] = string(1, s[s.size() - 1]);
	for (int i = 1; i < s.size(); i++) {
		arr[i] = string(1, s[s.size() - 1 - i]) + arr[i - 1];
	}

	sort(arr, arr + s.size());

	for (int i = 0; i < s.size(); i++) {
		cout << arr[i] << '\n';
	}
	return 0;
}