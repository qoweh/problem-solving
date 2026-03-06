#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

vector<string> v;

int f(string str) {
	int res = 0;
	for (auto c : str) {
		if (isdigit(c)) res += c - '0';
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(), v.end(), [](string a, string b) {
	if (a.size() == b.size()) {
			int a1 = f(a);
			int b1 = f(b);
			if (a1 == b1) {
				return a < b;
			}
			return a1 < b1;
		}
		return a.size() < b.size();
	});

	for (auto str : v) cout << str << '\n';

	return 0;
}