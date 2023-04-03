#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string input;
  cin >> input;

  int idx;
  cin >> idx;
  cout << input[idx - 1];

  return 0;
}
