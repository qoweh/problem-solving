#include <algorithm>
#include <vector>

using namespace std;

int s[1000];

int solution(vector<int> array) {
    for (int& k : array) s[k]++;
    
    int max_num = *max_element(s, s+1000);
    int cnt = 0, answer = 0;
    for (int i = 0, f = 0; i < 1000; i++) {
        if (max_num == s[i]) {
            cnt++;
            answer = i;
        }
    }
    return cnt > 1 ? -1 : answer;
}