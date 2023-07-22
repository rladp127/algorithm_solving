#include <iostream>
using namespace std;

// 첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어의 길이는 2보다 크거나 같고, 15보다 작거나 같다.
// UNUCIC

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  string s;
  cin >> s;

  int output = 0;
  
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= 'A' && s[i] <= 'C')
      output += 3;
    else if (s[i] >= 'D' && s[i] <= 'F')
      output += 4;
    else if (s[i] >= 'G' && s[i] <= 'I')
      output += 5;
    else if (s[i] >= 'J' && s[i] <= 'L')
      output += 6;
    else if (s[i] >= 'M' && s[i] <= 'O')
      output += 7;
    else if (s[i] >= 'P' && s[i] <= 'S')
      output += 8;
    else if (s[i] >= 'T' && s[i] <= 'V')
      output += 9;
    else 
      output += 10;
  }

  cout << output;
}