
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>

using namespace std;

bool isPrimeNum(long long n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    long long n;
    for (int i = 0; i < num; i++) {
        cin >> n;
        if (n >= 0 && n <= 2)
            cout << 2 << '\n';
        else if (n == 3)
            cout << 3 << '\n';
        else {
            while (!isPrimeNum(n))
                n++;
            cout << n << '\n';
        }
    }

    return 0;
}