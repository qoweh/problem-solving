#include <iostream>
#include <set>
using namespace std;

set<string> S;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//1,000,000
	int n;
	cin >> n;
	while (n-- > 0) {
		string name, status;
		cin >> name >> status;
		if (status == "enter") {
			S.insert(name);
		} else if (status == "leave") {
			S.erase(name);
		}
	}
	for (auto it = S.rbegin(); it != S.rend(); it++)
		cout << *it << '\n';
	return 0;
}