  #include <iostream>
  using namespace std;
  
  int main() {
    int N;
    cin >> N; // 명령어 개수 입력 받기
    int stack[N]; // 배열 만들기
  
    int top = 0;
    
    while(N != 0) {
      string input;
      cin >> input;
  
      if (input.compare("push") == 0) {
        int num;
        cin >> num;
        
        stack[top++] = num;
      }

      else if (input.compare("pop") == 0) {
        if (top == 0) cout << -1 << "\n";
        else cout << stack[--top] << "\n";
      }

      else if (input.compare("size") == 0) {
        cout << top << "\n";
      }

      else if (input.compare("empty") == 0) {
        if (top == 0) cout << 1 << "\n";
        else cout << 0 << "\n";
      }

      else if (input.compare("top") == 0) {
        if (top == 0) cout << -1 << "\n";
        else cout << stack[top-1] << "\n";
      }
      
      N--;
    }
    return 0;
  }
/*
스택 구현1
명령어 개수 N
push pop size empty top
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/
