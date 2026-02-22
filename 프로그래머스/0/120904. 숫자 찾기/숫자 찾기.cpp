#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    auto answer = to_string(num).find((char)('0' + k));
    return answer == string::npos ? -1 : answer + 1;
}