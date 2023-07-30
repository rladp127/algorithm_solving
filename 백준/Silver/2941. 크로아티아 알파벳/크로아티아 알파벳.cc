#include <iostream>
using namespace std;


int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    string word;
    cin >> word;

    int idx = word.length(), num = 0;
    int w = word.length();


    for (int i = 0; i < word.length(); i++){
        if (word[i] == 'c' && word[i+1] == '=') {
            num++;
            w-=2;
        }
        else if (word[i] == 'c' && word[i+1] == '-') {
            num++;
            w-=2;
        }
        else if (word[i] == 'd' && word[i+1] == 'z' && word[i+2] == '=') {
            num++;
            w-=3;
        }
        else if (word[i] == 'd' && word[i+1] == '-') {
            num++;
            w-=2;
        }
        else if (word[i] == 'l' && word[i+1] == 'j') {
            num++;
            w-=2;
        }
        else if (word[i] == 'n' && word[i+1] == 'j') {
            num++;
            w-=2;
        }
        else if (word[i] == 's' && word[i+1] == '=') {
            num++;
            w-=2;
        }
        else if (word[i] == 'z' && word[i+1] == '=') 
        if (word[i-1] != 'd') { // dz= 와의 중복 X
            num++;
            w-=2;
        }
    }

    cout << num + w;
    return 0;
}  