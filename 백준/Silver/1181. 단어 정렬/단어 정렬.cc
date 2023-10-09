#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
string arr[20000];

bool compare (string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    }
    else {
        return a.length() < b.length();
    }
}

int main() {
    cin.tie(0); 
    ios::sync_with_stdio(false);

    int case_num;
    cin >> case_num;

    for (int i = 0; i < case_num; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+case_num, compare);

    for (int i = 0; i < case_num; i++) {
        if (i != 0 && arr[i] == arr[i-1])
            continue;
        cout << arr[i] << '\n';
    }

    return 0;
}