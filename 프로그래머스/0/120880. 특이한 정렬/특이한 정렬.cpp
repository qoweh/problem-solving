#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    sort(numlist.begin(), numlist.end(), [n](int& a, int& b) {
        if (abs(n-a) == abs(n-b)) return a > b;
        return abs(n-a) < abs(n-b);
    });
    return numlist;
    // vector<pair<int, int>> v;
    // for (auto num : numlist) {
    //     v.push_back({abs(num-n), num});
    // }
    // sort(v.begin(), v.end(), [](auto a, auto b) {
    //     if (a.first == b.first) return a.second > b.second;
    //     return a.first < b.first;
    // });
    // vector<int> answer;
    // for (auto& p : v) {
    //     answer.push_back(p.second);
    // }
    // return answer;
}