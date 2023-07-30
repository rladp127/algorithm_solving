#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	int num;
	string s;

	cin >> num;
	for (int j = 0; j < num; j++) {
		cin >> s;
		int sum = 0, count = 0;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == 'O') count++;
			else count = 0;
			sum += count;
		}
		cout << sum <<'\n';
	}
}
