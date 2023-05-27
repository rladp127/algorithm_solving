#include <iostream>
using namespace std;

int main() {
    long sum = 0;
    long num1, num2, num3;

    cin >> num1 >> num2 >> num3;
    sum += num1;
    sum += num2;
    sum += num3;

    cout << sum;

    return 0;
}