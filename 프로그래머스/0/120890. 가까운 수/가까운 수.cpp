#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    vector<pair<int, int>> v;
    for (auto& num : array) {
        v.push_back({abs(n-num), num});
    }
    sort(v.begin(), v.end());
    return v.front().second;
}