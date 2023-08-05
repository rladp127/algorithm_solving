#include <iostream>
using namespace std;

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int max = 0, m_idx;
    
    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            int tmp;
            cin >> tmp;
            sum += tmp;
        }

        if (max < sum) {
            max = sum;
            m_idx = i;
        }
    }

    cout << m_idx+1 << ' ' << max;

    return 0;
}  