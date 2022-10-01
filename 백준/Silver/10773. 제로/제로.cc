#include <iostream>
using namespace std;

int main() {
        int K;
        cin >> K;

        int arr[K];
        int top = 0;

        int sum = 0;

        while (K != 0) {
                int num;
                cin >> num;

                if (num == 0) {
                        top--;
                        sum -= arr[top];
                }
                else {
                        arr[top++] = num;
                        sum += num;
                }
                K--;
        }
  
        cout << sum;
        return 0;
}
