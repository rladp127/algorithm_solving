#include <iostream>
#include <string>
using namespace std;

int main() {
        int T; // test case 입력
        cin >> T;
        string result[T]; // 결과 저장할 배열

        for (int i = 0; i < T; i++) {
                int top = 0;
          
                string input; // 괄호 입력 받기
                cin >> input;
                int len = input.length();

                string arr[len]; // 저장할 스택(괄호 길이만큼)

                for (int j = 0; j < len; j++) {
                        if (input[j] == '(') 
                                  arr[top++] = "(";
                          
                        else if(input[j] == ')') {
                          if (top == 0) result[i] = "NO";
                          else top--;
                        }
                }
          
                if(top == 0 && result[i] != "NO") result[i] = "YES";
                else if (top != 0) result[i] = "NO";

        }

        for (int i = 0; i < T; i++) {
                cout << result[i] << "\n";
        }

        return 0;
}