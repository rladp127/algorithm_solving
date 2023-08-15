#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    int result = 0;
    bool is_minus = false;
    string num;

    for (int i = 0; i <= s.length(); i++) {

        if (s[i] == '+' || s[i] == '-' || i == s.size()) {
            if (is_minus) {
                result -= stoi(num);
                num = "";
            }
            else {
                result += stoi(num);
                num = "";
            }
        }

        else {
            num += s[i];
        }

        if (s[i] == '-') {
            is_minus = true;
        }
    }

    cout << result;

    return 0;
}