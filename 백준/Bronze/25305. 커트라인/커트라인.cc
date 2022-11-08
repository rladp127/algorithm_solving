#include <iostream>
using namespace std;
int score[1000];

int main() {
    int totalnum; // 총 인원 수
    int num; // 상 받는 인원 수

    cin >> totalnum >> num;

    for (int i = 0; i < totalnum; i++) {
        cin >> score[i];
    }

    for (int i = 0; i < totalnum; i++) { // 정렬
        for (int j = 0; j < i; j++) {
            if (score[i] < score[j]) {
                int tmp = score[i];
                for (int z = i; z >= j; z--) {
                score[z] = score[z-1];
                }
                score[j] = tmp;
                break;
            }   
        }
    }

    cout << score[totalnum-num];
}