#include <iostream>
using namespace std;
int queue[100];

int main() {
  ios::sync_with_stdio(false);
	cin.tie(nullptr);
  
  int testcase;
  cin >> testcase;

  for (int j = 0; j < testcase; j++) {
    int num, index;
    cin >> num >> index;

    for (int i = 0; i < num; i++) 
      cin >> queue[i];

    int front = 0;
    int count = 0;
    int max = 0;

    while (1) {
      for (int i = 0; i < num; i++) { // 큐 내에서 가장 큰 값 찾기
        if (queue[i] > max) max = queue[i];
      }

      while (queue[front] != max) { // 가장 큰 값을 front가 가리킬 때까지 이동
        front = (front+1) % num;
      }

      if (front == index) break; // front가 index값을 가리키고 있다면 break (더 큰 값이 index 말고 없다는 뜻이므로)

      queue[front] = 0; // 가장 큰 queue 값 초기화
      front = (front+1) % num; // front 이동
      max = 0; // 최댓값 초기화
      count++;
    }
    
    cout << count+1 << '\n';
  }
  
  return 0;
}