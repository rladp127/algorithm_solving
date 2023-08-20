#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        int n1, n2;
        cin >> n1 >> n2;

        cout << n1+n2 << '\n';
    }

    return 0;
}