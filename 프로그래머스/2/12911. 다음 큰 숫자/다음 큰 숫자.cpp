#include <string>
#include <iostream>

using namespace std;

string to_bin(int n) {
    string binary = "";
    while (n > 0) {
        binary += "01"[n % 2];
        n /= 2;
    }
    return string(binary.rbegin(), binary.rend());
}

int count_number_one(string str) {
    int res = 0;
    for (auto& c : str) if (c == '1') res++;
    return res;
}

int solution(int n) {
    string n_str = to_bin(n);
    int n_str_cnt = count_number_one(n_str);
    while (1) {
        n++;
        if (n_str_cnt == count_number_one(to_bin(n))) break;
    }
    return n;
}