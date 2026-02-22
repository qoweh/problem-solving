#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    int middle = total / num;
    vector<int> answer;
    int val = middle - num;
    while (1) {
        int k = 0;
        for (int i = val; i < val + num; i++) {
            answer.push_back(i);
            k += i;
        }
        if (k == total) break;
        answer.clear();
        val++;
    }
    return answer;
}