#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int arr[201];
map<int, int> m;

vector<int> solution(vector<vector<int>> score) {
    vector<int> t, answer;
    for (auto& c : score) arr[(c[0] + c[1])]++;
    for (int i = 200, cnt = 1; i >= 0; i--) {
        if (arr[i] > 0) {
            m[i] = cnt;
            cnt += arr[i];
        }
    }
    for (auto& c : score) {
        answer.push_back(m[(c[0] + c[1])]);
    }
    return answer;
}