#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v1;
vector<int> v2;

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int num;
  cin >> num;
  
  int temp;
  for (int i = 0; i < num; i++) {
    cin >> temp;
    v1.push_back(temp);
  }
  for (int i = 0; i < num; i++) {
    cin >> temp;
    v2.push_back(temp);
  }

  sort(v1.begin(), v1.end());
  sort(v2.rbegin(), v2.rend());	
  
  int result = 0;
  for (int i = 0; i < num; i++) {
    int temp = v1[i] * v2[i];
    result += temp;
  }

  cout << result;

  return 0;
}