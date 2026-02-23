#include <cmath>
#include <string>
#include <vector>
#include <stack>

using namespace std;

stack<int> s;

// 뒤의 기능이 먼저 개발되고, 배포되는 시점은 앞의 기능이 배포되는 시점.

vector<int> solution(vector<int> prog, vector<int> speed) {
    int cnt;
    vector<int> res;
    
    for (int i = prog.size() - 1; i >= 0; i--) {
        int t = ceil((100.0 - prog[i]) / speed[i]);
        s.push(t);
    }
    
    while (!s.empty()) {
        cnt = 1;
        int k = s.top(); s.pop();
        while (!s.empty() && k >= s.top()) {
            s.pop();
            cnt++;
        }
        res.push_back(cnt);
    }
    
    return res;
}