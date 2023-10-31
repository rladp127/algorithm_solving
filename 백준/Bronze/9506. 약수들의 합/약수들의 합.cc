#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while(1) {
        vector <int> arr;

        int input;
        cin >> input;

        if (input == -1) break;
        else {
            int tmp = 0;
            for (int i = 1; i < input; i++) {
                if (input % i == 0) {
                    arr.push_back(i);
                    tmp += i;
                }
            }
            if (tmp == input) {
                cout << input << " = ";
                for (int i = 0; i < arr.size(); i++) {
                    if (i == arr.size()-1) cout << arr[i];
                    else cout << arr[i] << " + ";
                }
                cout << '\n';
            }
            else {
                cout << input << " is NOT perfect.\n";
            }
        }
    }

    return 0;
}