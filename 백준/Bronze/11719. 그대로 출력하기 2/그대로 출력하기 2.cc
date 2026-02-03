#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	while (!cin.eof()) {
		getline(cin, s);
		cout << s << '\n';
	}
	return 0;
}