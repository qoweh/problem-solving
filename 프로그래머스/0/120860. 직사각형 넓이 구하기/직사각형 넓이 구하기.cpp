#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    sort(dots.begin(), dots.end(), [](auto a, auto b) {
        if (a[0] == b[0]) return a[1] < b[1];
        return a[0] < b[0];
    });
    auto x = dots.front();
    auto y = dots.back();
    return (y[1] - x[1]) * (y[0] - x[0]);
}