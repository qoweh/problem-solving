#include <iostream>

using namespace std;

long long string_to_int(string s) {
	long long t = 0;

	if (s.size() < 1) return -1;
	for (int i = 0; i < s.size(); i++) {
		t = t * 10 + s[i] - '0';
	}
	return t;
}

long long f(string a, string b, string c, string d) {
	long long t = 0;

	string ab = a + b;
	string cd = c + d;

	t += string_to_int(ab);
	t += string_to_int(cd);
	return t;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string a, b, c, d;

	cin >> a >> b >> c >> d;
	cout <<f(a, b, c, d);
	return 0;
}