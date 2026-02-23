#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string to_binary(int k) {
    string res = "";
    while (k > 0) {
        res += "01"[k % 2];
        k /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

vector<int> solution(string s) {
    int rep = 0, cnt = 0;
    
    while (s != "1") {
        rep++;
        // s에서 0제거 : 제거하며 0의 개수 세기 + 제거 후 길이 측정
        int len_1 = 0;
        for (auto& c : s) {
            if (c == '0') cnt++;  
            else len_1++;
        }
        s = to_binary(len_1);
    }
    
    return vector<int>{rep, cnt};
}