#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int testcase;
	int arr[10] = { 0, };
		
	cin >> testcase;
	for (int j = 0; j < testcase; j++) {
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + 10);
		cout << arr[7] << endl;
	}

	return 0;
}