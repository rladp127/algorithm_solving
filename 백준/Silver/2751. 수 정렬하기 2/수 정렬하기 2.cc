#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std; 

int main(void){ 
  vector<int> arr;
  int test;

  cin >> test;
  
  for (int i = 0; i < test; i++) {
    int num;
    cin >> num;
    arr.push_back(num);
  }
  sort(arr.begin(), arr.end()); 
 
  for(int i = 0; i < test; i++){
    cout << arr[i] << ' '; 
  } 
  return 0; 
}