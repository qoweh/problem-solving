#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> t, answer;

    for (auto& c : score) t.push_back(c.front() + c.back());
    sort(t.begin(), t.end(), greater<>());
    
    for (auto& c : score) {
        int k = c.front() + c.back();
        int idx = find(t.begin(), t.end(), k) - t.begin() + 1; 
        answer.push_back(idx);
    }
    
    return answer;
}




int arr[201];
map<int, int> m;

vector<int> solution1(vector<vector<int>> score) {
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
