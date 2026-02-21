#include <string>
#include <vector>
#include <iostream>

using namespace std;
vector<string> dict{"aya", "ye", "woo", "ma"};

bool isblank(string& str) {
    for (auto& c : str) {
        if (c != ' ') return false;
    }
    return true;
}

int solution(vector<string> babbling) {
    int answer = 0;
    for (auto& str : babbling) {
        for (auto& word : dict) {
            int idx;
            if ((idx = str.find(word)) != string::npos && str.substr(idx, word.size()) == word) {
                // 같은 부분은 없애자.
                str = str.substr(0, idx - 0) + " " + str.substr(idx + word.size());
            }
            if (isblank(str)) {
                answer++;
                break;
            }
        }
    }
    return answer;
}