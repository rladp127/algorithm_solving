#include <iostream>
using namespace std;

int main() {
    long long int num1, num2;
    cin >> num1 >> num2;

    int bigger = num1;
    int smaller = num2;

    if (num1 < num2) {
        bigger = num2;
        smaller = num1;
    }

    long long int result = bigger;

    while(1) {
        if (result % smaller == 0) {
            break;
        }
        else {
            result += bigger;
        }
    }

    cout << result;

    return 0;
}