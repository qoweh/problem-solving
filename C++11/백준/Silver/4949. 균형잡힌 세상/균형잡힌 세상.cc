#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string init;
    while (true)
    {
        int flag = 0;
        getline(cin, init);
        if (init == ".") break;
        stack<char> S;
        for (auto a : init)
        {
            if (flag) break;
            if (a == '[' || a == '(') S.push(a);
            else if (a == ']' || a == ')')
            {
                if (S.empty()) 
                {
                    flag = 1; 
                    break;
                }
                // [ : 91, ] : 93, ( : 40, ) : 41 -> fair가 1, 2 값이어야 옳은 경우
                int fair = a - S.top();
                if (fair == 1 || fair == 2) S.pop();
                else flag = 1;
            }
        }
        if (!S.empty()) flag = 1;
        if (flag) cout << "no\n";
        else cout << "yes\n";
    }
    return 0;
}