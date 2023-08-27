#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        string input;
        cin >> input;

        if (input.length() < 2) {
            for (int j = 0; j < 2; j++)
                cout << input;
        }
        
        else {
            cout << input[0];
            cout << input[input.length()-1];
        }

        cout << '\n';
    }

    return 0;
}