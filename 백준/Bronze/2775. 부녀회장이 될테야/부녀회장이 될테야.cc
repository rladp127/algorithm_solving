#include <iostream>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  int k, n, i, j, testCase;

 int arr[15][15] = {0, };

  for (i = 0; i < 15; i++)  
    arr[0][i] = i; // 0층에 사람 수 할당
  
  for (i = 1; i < 15; i++) 
    for (j = 1; j < 15; j++) 
      arr[i][j] = arr[i-1][j] + arr[i][j-1]; //1층부터 순서대로 정의됨
  
  cin >> testCase;

  while (testCase > 0) {
    cin >> k >> n;
    cout << arr[k][n] << '\n';
    testCase--;
  }

}
