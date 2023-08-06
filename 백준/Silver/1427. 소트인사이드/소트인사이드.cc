#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	int N;
	cin >> N;

    while (N > 0) {
        v.push_back(N%10);
        N /= 10;
    }

    sort(v.begin(), v.end());

    for (int i = v.size()-1; i >= 0; i--) {
        cout << v[i];
    }

	return 0;
}