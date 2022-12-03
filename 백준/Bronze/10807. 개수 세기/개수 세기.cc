#include <iostream>
using namespace std;
int arr[100];

int main() {  
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int num, cnt = 0;
  cin >> num;

  for (int i = 0; i < n; i++) {
    if (arr[i] == num) cnt++;
  }

  cout << cnt;

  return 0;
}