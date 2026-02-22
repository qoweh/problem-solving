#include <string>
#include <vector>
#include <numeric>

using namespace std;

bool is_true(int k) {
    while (k % 2 == 0) k /= 2;
    while (k % 5 == 0) k /= 5;
    return k == 1;
}

int solution(int a, int b) {
    int k = gcd(a, b);
    b /= k;
    // return ((b%2)%5 == 1) ? 1 : 2;
    return is_true(b) ? 1 : 2;
}