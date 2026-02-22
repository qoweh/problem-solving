#include <string>

using namespace std;

int solution(int n) {
    int answer = 0;
    while (n-- > 0) {
        answer++;
        while (answer % 3 == 0 
               || to_string(answer).find('3') != string::npos) 
            answer++;
    }
    return answer;
}