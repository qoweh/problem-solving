#include <stack>
#include <vector>

using namespace std;

stack<int> s;

vector<int> solution(vector<int> p) {
    vector<int> res;
    for (int i = 0; i < p.size(); i++) res.push_back(p.size()-1 - i);
    
    for (int i = 0; i < p.size(); i++) {
        while (!s.empty() && p[s.top()] > p[i]) {
            res[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i);
    }
    return res;
}