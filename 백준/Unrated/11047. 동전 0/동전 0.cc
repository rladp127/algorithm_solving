#include <iostream>
using namespace std;
int coin[10];

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int num, total;
  cin >> num >> total;
  for (int i = 0; i < num; i++) 
    cin >> coin[i];

  int coin_num = 0;
  
  for (int i = num-1; i >= 0; i--) {
    coin_num += total / coin[i];
    total = total % coin[i];
  }

  cout << coin_num;
  
  return 0;
}