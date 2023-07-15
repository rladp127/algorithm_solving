#include <iostream>
using namespace std;

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  for (int i = 0; i < 100; i++) {
    cout << s[i];
    if ((i+1) % 10 == 0 && i != 0) cout << '\n';
    if (i == s.length()-1) break;
  }

  return 0;
}