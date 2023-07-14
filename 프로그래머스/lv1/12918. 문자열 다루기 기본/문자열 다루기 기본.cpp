#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if (s.length() == 4 || s.length() == 6) {
        for(int i = 0; i < s.length(); i++) {
            if(48 > s[i] || s[i] > 57) {
                return false;
            }
        }
    }
    else return false;
    return answer;
}