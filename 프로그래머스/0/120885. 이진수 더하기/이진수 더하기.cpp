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