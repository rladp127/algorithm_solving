#include <iostream>
#include <vector>
using namespace std;


int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    vector<int> arr;
    int num = 1;

    for (int i = 0; i < 1000; i++) {
        for (int j = 1; j <= num; j++) {
            arr.push_back(num);
        }
        num++;
    }

    int start, end, sum = 0;
    cin >> start >> end;

    for (int i = start-1; i <= end-1; i++) {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}  