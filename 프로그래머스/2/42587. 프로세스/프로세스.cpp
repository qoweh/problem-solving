#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

queue<pair<int, int>> q;

int solution(vector<int> p, int loc) {
    for (int i = 0; i < p.size(); i++) q.push({p[i], i});
    sort(p.begin(), p.end(), greater<>());
    
    int res = 1;
    for (auto& c : p) {
        while (!q.empty() && c != q.front().first) {
            q.push(q.front()); q.pop();
        }
        if (q.front().second == loc) return res;
        q.pop();
        res++;
    }
}