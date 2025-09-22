#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    vector<int> V;
    stringstream ss(s);
    string p;

    while (getline(ss, p, ' ')) {
        V.push_back(stoi(p));
    }

    sort(V.begin(), V.end());

    string answer = to_string(V.front()) + " " + to_string(V.back());
    return answer;
}