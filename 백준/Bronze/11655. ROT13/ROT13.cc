#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	getline(cin , s);
	for (auto& c : s) {
		if (('a' <= c && c <= 'z') 
		|| ('A' <= c && c <= 'Z')) {
			if ('a' <= c && c <= 'z' && c + 13 > 'z') {
				c = 'a' + c + 13 - ('z' + 1);
			} else if ('A' <= c && c <= 'Z' && c + 13 > 'Z') {
				c = 'A' + c + 13 - ('Z' + 1);
			} else {
				c += 13;
			}
		}
		cout << c;
	}

	return 0;
}