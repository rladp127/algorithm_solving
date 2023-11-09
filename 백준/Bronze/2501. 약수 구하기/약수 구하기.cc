#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num, idx;
    cin >> num >> idx;

    int tmp = 0;
    int result = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            tmp++;
        }
        if (tmp == idx) {
            result = i;
            break;
        }
    }

    cout << result;

    return 0;
}