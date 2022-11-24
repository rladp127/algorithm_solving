#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  
  int A, B, C;
  cin >> A >> B >> C;

  cout << ((A+B)%C) << '\n' << ((A%C) + (B%C))%C << '\n' << (A*B)%C << '\n' << ((A%C) * (B%C))%C;

  return 0;
}