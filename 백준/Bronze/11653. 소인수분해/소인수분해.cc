#include <iostream>
using namespace std;

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num;
    cin >> num;
    
    while (num != 1) {
        for (int i = 2; i <= num; i++) {
            if (num % i == 0) {
                cout << i << '\n';
                num /= i;
                break;
            }
        }
    }

  return 0;
}