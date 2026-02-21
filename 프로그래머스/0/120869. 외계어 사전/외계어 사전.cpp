#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    for (auto& word : dic) {
        int s['z'-'a'+1] = {};
        for (auto& c : word) {
            s[c - 'a']++;
        }
        for (auto& spell_c : spell) {
            char k = spell_c[0];
            if (s[k - 'a'] == 0) break;
            else s[k - 'a']--;
        }
        if (*max_element(s, s + 'z'-'a'+1) == 0 && spell.size() == word.size()) return 1;
    }
    return 2;
}