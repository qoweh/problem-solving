#include <string>
#include <unordered_map>

using namespace std;

string solution(string letter) {
    unordered_map<string, char> m = {
        {".-", 'a'}, {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'}, {"..-.", 'f'},
        {"--.", 'g'}, {"....", 'h'}, {"..", 'i'}, {".---", 'j'}, {"-.-", 'k'}, {".-..", 'l'},
        {"--", 'm'}, {"-.", 'n'}, {"---", 'o'}, {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},
        {"...", 's'}, {"-", 't'}, {"..-", 'u'}, {"...-", 'v'}, {".--", 'w'}, {"-..-", 'x'},
        {"-.--", 'y'}, {"--..", 'z'}
    };
    string answer = "", t = "";
    for (int i = 0; i < letter.size(); i++) {
        if (letter[i] == ' ') {
            answer += m[t];
            t.clear();
        } else t += letter[i];
    }
    answer += m[t];
    return answer;
}