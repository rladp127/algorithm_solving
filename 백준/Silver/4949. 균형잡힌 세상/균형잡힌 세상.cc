#include <iostream>
#include <string>
using namespace std;

int main() {
  while(1) {
    string arr;
    getline(cin, arr);
    if (arr.compare(".") == 0) break;
    
    int top = 0;
    int len = arr.length();
    char stack[len];
    string result = "yes";
    
    for (int i = 0; i < len; i++) {
      if (arr[i] == '(' || arr[i] == '[') // 여는 괄호 push
        stack[top++] = arr[i];
      
      else if (arr[i] == ')') {
        if (stack[top-1] != '(') 
          result = "no";
        
        else if (top == 0) 
        result = "no";
          
        else if (stack[top-1] == '(') top--;
      }
        
      else if (arr[i] == ']') {
        if (stack[top-1] != '[')
          result = "no";
          
        else if (top == 0) 
          result = "no";
          
        else if (stack[top-1] == '[') top--;
      }
    }
    if (top != 0) result = "no";
    cout << result << "\n";
  }
  
  return 0;
}

/*
한 줄 입력받아서 arr에 저장 
top, stack 정의(arr 길이만큼)
여는 괄호 (, [ 이면 stack에 push
닫는 괄호 ), ] 이면 stack pop인데, 
1. ) 인 경우 top에 ( 이 없으면 NO
2. ] 인 경우 top에 ] 이 없으면 NO
3. 닫는 괄호인데 top == 0 인 경우 NO


So when I die (the [first] I will see in (heaven) is a score list).
[ first in ] ( first out ).
Half Moon tonight (At least it is better than no Moon at all].
A rope may form )( a trail in a maze.
Help( I[m being held prisoner in a fortune cookie factory)].
([ (([( [ ] ) ( ) (( ))] )) ]).
 .
.
*/