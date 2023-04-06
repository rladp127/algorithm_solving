#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int times;
    cin >> times;
    B += times;

    if (B >= 60) {
        while (B >= 60) {
            B -= 60;
            A += 1;
        }
    }
    
    
    while (A > 23) {
        A -= 24;
    }

    cout << A << " " << B;
    return 0;
}