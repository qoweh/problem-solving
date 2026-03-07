#include <iostream>
using namespace std;

long long f(int a, int b, int c) {
	if (b == 1) return a % c;
	long long t = f(a, b/2, c);
	t = (t*t) % c;
	if (b % 2 == 1) t = (t*a) % c;
	return t;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << f(a, b, c);
	return 0;
}