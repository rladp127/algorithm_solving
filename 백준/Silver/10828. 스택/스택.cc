#include <iostream>
using namespace std;
int s[10000];

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int num;
  cin >> num;
  int idx = 0;

  while (num != 0) {
    string input;
    cin >> input;

    if (input.compare("push") == 0) {
      int n;
      cin >> n;
      s[idx++] = n;
    }

    else if (input.compare("pop") == 0) {
      if (idx != 0) cout << s[--idx] << '\n';
      else cout << "-1\n";
    }

    else if (input.compare("size") == 0) {
      cout << idx << '\n';
    }

    else if (input.compare("empty") == 0) {
      if (idx == 0) cout << "1\n";
      else cout << "0\n";
    }

    else if (input.compare("top") == 0) { // top
      if (idx == 0) cout << "-1\n";
      else cout << s[idx-1] << '\n';
    }
    num--;
  }

  return 0;
}