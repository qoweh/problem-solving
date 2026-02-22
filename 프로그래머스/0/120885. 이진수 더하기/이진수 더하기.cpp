#include <algorithm>

using namespace std;
string solution(string b1, string b2) {
    string result = "";
    int i = b1.size() - 1;
    int j = b2.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += b1[i--] - '0';
        if (j >= 0) sum += b2[j--] - '0';

        result += (sum % 2) + '0';
        carry = sum / 2;
    }

    reverse(result.begin(), result.end());
    return result;
}


string solution2(string b1, string b2) {
    int n1 = stoi(b1, nullptr, 2);
    int n2 = stoi(b2, nullptr, 2);

    int sum = n1 + n2;

    string res = "";
    while (sum > 0) {
        res = char(sum % 2 + '0') + res;
        sum /= 2;
    }

    return res == "" ? "0" : res;
}