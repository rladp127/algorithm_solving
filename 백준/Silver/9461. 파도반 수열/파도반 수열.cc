#include <iostream>
using namespace std;
long long int result[101] = {0,};


int main() { 
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);

  int loop_num;
  cin >> loop_num;

  result[1] = 1;
  result[2] = 1;
  result[3] = 1;
  
  while (1) {
    if (loop_num == 0) break;
    int num;
    cin >> num;
  
    for (int i = 3; i <= num; i++) {
      result[i] = (result[i-2] + result[i-3]);
    }
    
    cout << result[num] << '\n';
    loop_num--;
  }
  
  return 0;
}
