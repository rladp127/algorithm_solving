
#include <iostream>
using namespace std;

int num[6] = {0, };

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        num[n]++;
    }

    int big = 0, same = 0, flag = 0;

    for (int i = 1; i <= 6; i++) {
        // cout << "이번 i 는 !! " << i << endl;
        if (flag == 0 && num[i] >= 1) {
            big = i;
        }

        if (num[i] > 1) {
            // cout << "i는 " << i << " 해당 갯수는 " << num[i] << '\n';
            same = num[i];
            big = i;
            flag = 1;
        }
    }

    // cout << "same 은 " << same << '\n';
    // cout << "big 은 " << big << '\n';

    if (same == 3) cout << 10000 + big*1000;
    else if (same == 2) cout << 1000 + big*100;
    else if (same == 0) cout << big*100;


    return 0;
}