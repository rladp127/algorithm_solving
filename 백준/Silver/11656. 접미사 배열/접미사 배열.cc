#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    vector<string> v;

    string input;
    cin >> input;

    int num = 0;

    for (int i = 0; i < input.length(); ++i) {
		string temp = input.substr(i, input.length() - i);
		v.push_back(temp);
	}

    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << '\n';
    }

    return 0;
}