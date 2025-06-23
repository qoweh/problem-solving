#include <bits/stdc++.h>
using namespace std;

int arr['z' -'a' + 1];
int main(void) {
  //문자열 입력받아서 알파벳의 인덱스값 출력
  string input;
  cin >> input;
  for (char c : input) arr[int(c) - int('a')]++;
  for (int v : arr) cout << v << ' ';
  return 0;
}
