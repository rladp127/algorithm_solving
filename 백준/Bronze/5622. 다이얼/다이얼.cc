#include <iostream>
using namespace std;

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  string s;
  cin >> s;

  int output = 0;
  
  for (int i = 0; i < s.length(); i++) {
    int tmp = (int)s[i];
    if (tmp >= 87) output += 10;
    else if (tmp >= 84) output += 9;
    else if (tmp >= 80) output += 8;
    else if (tmp >= 77) output += 7;
    else if (tmp >= 74) output += 6;
    else if (tmp >= 71) output += 5;
    else if (tmp >= 68) output += 4;
    else output += 3;
  }

  cout << output;
}