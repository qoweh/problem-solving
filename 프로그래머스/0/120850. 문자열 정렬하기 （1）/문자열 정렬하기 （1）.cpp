#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    sort(my_string.begin(), my_string.end());
    vector<int> answer;
    for (auto& c : my_string) {
        if (isdigit(c)) answer.push_back(c - '0');
    }
    return answer;
}