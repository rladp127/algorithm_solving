// 수 124를 뒤집으면 421이 되고 이 두 수를 합하면 545가 된다. 124와 같이 원래 수와 뒤집은 수를 합한 수가 좌우 대칭이 되는지 테스트 하는 프로그램을 작성하시오.

#include <iostream>
#include <string>
using namespace std;

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int case_num;
    cin >> case_num;

    for (int i = 0; i < case_num; i++) {
        string num;
        cin >> num;

        string reverse_num;
        for (int i = num.length()-1; i >=0; i--) {
            reverse_num += num[i];
        }

        int total = stoi(num) + stoi(reverse_num);
        string total_string = to_string(total);


        bool result = true;
        int low = 0;
        int high = total_string.length() - 1;
    
        while (low < high)
        {
            if (total_string[low] != total_string[high]) {
                result = false;
            }
    
            low++;
            high--;
        }

        if (result) 
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}