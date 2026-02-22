#include <stack>
#include <sstream>

using namespace std;

stack<int> s;

int solution(string str) {
    stringstream ss(str);    
    int answer = 0;
    string word;
    
    while (ss >> word) {
        // if (word == 'Z')
        if (word == "Z") {
            if (!s.empty()) s.pop();
        } else {
            s.push(stoi(word));
        }
    }
    while (!s.empty()) {
        answer += s.top();
        s.pop();
    }
    return answer;
}