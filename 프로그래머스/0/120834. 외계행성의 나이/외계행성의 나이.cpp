#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "abcdefghij";
    string res = "";
    for (auto& c : to_string(age)) {
        res += answer[c - '0'];
    }
    return res;
}