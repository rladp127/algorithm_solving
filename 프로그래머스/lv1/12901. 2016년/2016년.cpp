#include <string>
#include <vector>
int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
std::string day[7] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};

using namespace std;

string solution(int a, int b) {
    int total = 5;

    for (int i = 0; i < a-1; i++) {
        total += days[i];
    }

    total += b;
    
    int idx = (total-1) % 7;

    return day[idx];
}