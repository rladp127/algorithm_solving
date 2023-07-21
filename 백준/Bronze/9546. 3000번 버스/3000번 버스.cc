#include <iostream>
using namespace std;

int arr[30];

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int num;
  cin >> num;

  for (int i = 0; i < num; i++) {
    int station;
    cin >> station;

    int n = 1, d = 2;
    if (station == 1) {
      cout << "1\n";
      continue;
    }
    else 
    for (int j = 1; j < station; j++) {
      n += d;
      d *= 2;
    }
    cout << n << '\n';
  }


  return 0;
}