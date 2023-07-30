#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    double n;
    string s;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        getline(cin, s);
        for (auto c : s) {
            if (c == '@') n *= 3;
            if (c == '%') n += 5;
            if (c == '#') n -= 7;
        }
        printf("%.2f\n", n);
    }
}