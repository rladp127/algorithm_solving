#include <iostream>
using namespace std;
int queue[2000000];

  int main() {  
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N; // 명령어 개수 입력 받기

    int front = 0; // 배열의 맨 앞 가리킴
    int rear = 0; // 배열의 맨 뒤 가리킴
    int size = 0;
    
    
    while(N != 0) {
      string input;
      cin >> input;
  
      if (input.compare("push") == 0) { 
        int num;
        cin >> num;
        
        queue[rear++] = num;
        size++;
      }

      else if (input.compare("pop") == 0) {
        if (front == rear) cout << -1 << '\n'; // empty인 경우
        else { 
          cout << queue[front++] << '\n'; 
          size--;  
        }
      }

      else if (input.compare("size") == 0) {
        if (size == 0) cout << '0' << '\n'; // empty인 경우
        else cout << size << '\n';
      }

      else if (input.compare("empty") == 0) {
        if (rear == front) cout << 1 << '\n';
        else cout << 0 << '\n';
      }

      else if (input.compare("front") == 0) {
        if (rear == front) cout << -1 << '\n';
        else cout << queue[front] << '\n';
      }
        
      else if (input.compare("back") == 0) {
        if (rear == front) cout << -1 << '\n';
        else cout << queue[rear-1] << '\n';
      }
      
      N--;
    }
    return 0;
  }
