#include <iostream>
using namespace std;

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int num;
  cin >> num;

  for (int i = 0; i < num; i++) {
    int n1, n2, big, small;
    cin >> n1 >> n2;

    if (n1 > n2) {
      big = n1; 
      small = n2;
    }
    else {
      big = n2; 
      small = n1;
    }
    
    int result = big;
    while(1) {
      if (result % small == 0) {
        cout << result << '\n';
        break;
      }
      else {
        result += big;
      }
    }
  }


  return 0;
}