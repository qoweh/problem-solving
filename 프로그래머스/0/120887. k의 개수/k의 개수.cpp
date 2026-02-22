#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for (int t = i; t <= j; t++) {
        string s = to_string(t);
        for (auto& c : s) {
            if (c - '0' == k) answer++;
        }
    }
    return answer;
}