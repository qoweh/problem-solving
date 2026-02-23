#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    vector<string> v = {
        "zero","one","two","three","four",
        "five","six","seven","eight","nine"
    };

    int i = 0;
    for (auto& s : v) {
        int idx;
        while ((idx = numbers.find(s)) != string::npos) {
            numbers.replace(idx, s.size(), to_string(i));
        }
        i++;
    }

    return stoll(numbers);
}