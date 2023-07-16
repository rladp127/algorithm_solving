#include <iostream>
#include <string>
using namespace std;
int arr[10] = {0,};

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    long long int result = num1 * num2 * num3;
    
    while (result > 0) {
        int idx = result%10;
        arr[idx]++;
        result /= 10;
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}