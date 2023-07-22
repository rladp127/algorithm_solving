#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    
    if (s[0] >= 'a' || s[0] <= 'z') {
        s[0] = toupper(s[0]);
    }
    
    for (int i = 1; i < s.length(); i++) {
        if (s[i] != ' ' && s[i-1] == ' ')
            s[i] = toupper(s[i]);
    }
    return s;
}