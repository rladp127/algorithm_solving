#include <iostream>
using namespace std;

int arr[100];

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        arr[i] = i+1;
    }

    for (int i = 0; i < M; i++) {
        int b1, b2;
        cin >> b1 >> b2;
        b1--; b2--;

        int tmp = arr[b1];
        arr[b1] = arr[b2];
        arr[b2] = tmp;
    }

    for (int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    } 

    return 0;
}