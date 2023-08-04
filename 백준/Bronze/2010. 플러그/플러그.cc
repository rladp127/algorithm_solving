#include <iostream>
using namespace std;

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num;
    cin >> num;
    int sum = 0;

    for (int i = 0; i < num; i++) {
        int temp;
        cin >> temp;
        sum += temp;
    }

    sum -= num-1;

    cout << sum;
        

    return 0;
}  