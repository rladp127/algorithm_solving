/*
8 16
32 4
17 5
0 0

factor
multiple
neither
*/

#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (1) {
        int n1, n2;
        cin >> n1 >> n2;

        if (n1 == 0 && n2 == 0) break;
        else if (n1 > n2) {
            if (n1 % n2 == 0) cout << "multiple\n";
            else {
                cout << "neither\n";
                continue;
            }
        }
        else if (n1 < n2) {
            if (n2 % n1 == 0) cout << "factor\n";
            else {
                cout << "neither\n";
                continue;
            }
        }
    }
    return 0;
}