#include <algorithm>
#include <set>
#include <vector>

using namespace std;

set<int> s;

int solution(vector<int> n)
{
    int len = n.size();
    for (auto num : n) s.insert(num);
    
    return min(n.size()/2, s.size());
    
    
    
    

    
    
    // s.insert(n.begin(), n.end());
    // return min(n.size() / 2, s.size());
}


/*
int arr[200001];

int solution(vector<int> n)
{
    int res = 0, cnt = n.size();
    for (int i = 0; i < cnt; i++) {
        if (arr[n[i]] == 0) res++;
        arr[n[i]]++;
    }
    return min(res, cnt / 2);
}
*/