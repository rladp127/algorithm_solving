#include <iostream>
using namespace std;
int element[5];

int main() {
  int sum = 0;
  
  for (int i = 0; i < 5; i++) {
    cin >> element[i];
    sum += element[i];
  }

    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < i; j++) {
          if (element[i] < element[j]) {
              int tmp = element[i];
              for (int z = i; z >= j; z--) {
                element[z] = element[z-1];
              }
              element[j] = tmp;
              break;
          } 
      }
  }
  cout << sum / 5 << '\n' << element[2];
  return 0;
}