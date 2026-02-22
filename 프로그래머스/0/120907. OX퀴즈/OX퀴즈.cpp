#include <string>
#include <vector>
#include <sstream>

using namespace std;

string oper = "-+=";

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for (auto& s : quiz) {
        stringstream ss(s);
        int a, b, c;
        char oper, res;
        ss >> a >> oper >> b >> res >> c;
        answer.push_back((oper == '+' ? a + b : a - b) == c ? "O" : "X");
    }
    return answer;
}