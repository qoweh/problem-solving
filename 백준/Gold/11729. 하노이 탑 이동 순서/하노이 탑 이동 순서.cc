#include <iostream>
using namespace std;

void f(int n, int x, int y) {
	if (n <= 0) return ;
	f(n-1, x, 6 - x - y);
	cout << x << ' ' << y << '\n';
	f(n-1, 6 - x - y, y); 
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	cout << (1<<n) - 1 << '\n';
	f(n, 1, 3);
	return 0;
}