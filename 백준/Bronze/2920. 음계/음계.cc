#include <iostream>
using namespace std;
int arr[8];

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int a = 0, d = 0;

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < 8; i++) {
        if (arr[i] > arr[i-1]) a = 1;
        else if (arr[i] < arr[i-1]) d = 1;
    }

    if (a == 1 && d == 1) cout << "mixed";
    else if (a == 1) cout << "ascending";
    else if (d == 1) cout << "descending";

    return 0;
}