#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int res = 0, coupon = chicken;
    while (chicken > 0) {
        res += coupon / 10;
        coupon = coupon / 10 + coupon % 10;      
        chicken /= 10;
    }
    res += coupon / 10;
    return res;
}