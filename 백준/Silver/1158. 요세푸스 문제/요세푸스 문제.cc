#include <iostream>
using namespace std;
int queue[25000000];
int list[5000]; // 숫자 저장할 배열

  int main() {  
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int number, point;
    cin >> number >> point;

    int rear = 0; 
    for (int i = 1; i <= number; i++) { // 초기 queue push
      queue[rear++] = i;
    }
    
    int index = 0; // list index 관리 변수
    
    for (int i = 0; i < 25000000; i++) {
      if (i % point == point-1) list[index++] = queue[i]; // point 번째 요소 push
      else {
        queue[rear++] = queue[i]; // point 번째 요소가 아닐 때, queue의 rear 자리에 push
      }
      if (index >= number) break;
    }
    
    // 출력
    cout << '<';
    for (int i = 0; i < number; i++) {
      cout << list[i];
      if (i != number-1) cout << ", ";
    }
    cout << '>';

    return 0;
  }
