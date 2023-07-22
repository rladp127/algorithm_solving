#include <iostream>
using namespace std;

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string pw;
  cin >> pw;

  string output = "";
  
  for (int i = 0; i < pw.length(); i++) {
    if (pw[i] == 'A') output += 'X';
    else if (pw[i] == 'B') output += 'Y';
    else if (pw[i] == 'C') output += 'Z';
    else output += pw[i]-3;
  }
  
  cout << output;
}