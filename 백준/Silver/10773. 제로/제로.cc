#include <iostream>
using namespace std;
int stack[1000000];

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int num;
  cin >> num;

  int idx = 0, sum = 0;

  for (int i = 0; i < num; i++) {
    int n;
    cin >> n;

    if (n == 0) idx--;
    else 
      stack[idx++] = n;
  }
  
  for (int i = 0; i < idx; i++) {
    sum += stack[i];
  }

  cout << sum;


  return 0;
}