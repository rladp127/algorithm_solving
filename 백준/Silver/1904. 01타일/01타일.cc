#include <iostream>
using namespace std;
long long int result[1000001] = {0,};

int main() { 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  int num;
  cin >> num;

  result[1] = 1;
  result[2] = 2;

  for (int i = 3; i <= num; i++) {
    result[i] = (result[i-1] + result[i-2]) % 15746;
  }

  cout << result[num];
  
  return 0;
}
