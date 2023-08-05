#include <iostream>
#include <string>
using namespace std;
int num[26] = {0,};

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        s[i] = toupper(s[i]);
        num[(s[i] - 65) % 26]++;
    }

    int max = num[0], max_num = 0, result = 1;
    for (int i = 0; i < 26; i++) {
        if (max < num[i]) {
            max = num[i];
            max_num = i;
        }
    }

    for (int i = max_num + 1; i < 26; i++){
        if (max == num[i]) result = 0;
    }

    if (result == 0) printf("?");
    else {
        printf("%c", max_num+65);
    }

    return 0;
}  