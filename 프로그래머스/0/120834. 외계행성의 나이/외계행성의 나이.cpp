#include <string>
#include <stack>

using namespace std;

stack<int> s;

string solution(int age) {
    string answer = "abcdefghij";
    while (age > 0) {
        s.push(age % 10);
        age /= 10;
    }
    string res = "";
    while (!s.empty()) {
        res += answer[s.top()];
        s.pop();   
    }
    return res;
}