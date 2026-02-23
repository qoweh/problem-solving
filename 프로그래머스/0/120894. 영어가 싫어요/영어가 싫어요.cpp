#include <string>
#include <map>

using namespace std;

map<string, int> m = {
    {"zero", 0},
    {"one", 1},
    {"two", 2}, 
    {"three", 3}, 
    {"four", 4}, 
    {"five", 5}, 
    {"six", 6}, 
    {"seven", 7}, 
    {"eight", 8}, 
    {"nine", 9}
};

long long solution(string numbers) {
    long long answer = 0;
    string s = "";
    for (auto& c : numbers) {
        s += c;
        if (m.find(s) != m.end()) {
            answer = 10 * answer + m[s];
            s.clear();
        }
    }
    return answer;
}