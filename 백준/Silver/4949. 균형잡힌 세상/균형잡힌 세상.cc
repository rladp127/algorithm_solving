#include <iostream>
#include <string>
using namespace std;
char stack[100];

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    while(1) {
        string input;
        getline(cin, input);
        if (input.compare(".") == 0) break;

        int top = 0;
        string result = "yes";

        for (int i = 0; i < input.length(); i++) {
            if (input[i] == '(' || input[i] == '[')
                stack[top++] = input[i];

            else if (input[i] == ']') {
                if (stack[top-1] != '[') result =  "no";

                else if (top == 0) result =  "no";

                else if (stack[top-1] == '[') top--;
            }

            else if (input[i] == ')') {
                if (stack[top-1] != '(') result =  "no";

                else if (top == 0) result =  "no";

                else if (stack[top-1] == '(') top--;
            }
        }

        if (top != 0) result =  "no";
        cout << result << '\n';
    }
    return 0;
}  