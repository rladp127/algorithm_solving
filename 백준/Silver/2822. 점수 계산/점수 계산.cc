#include <iostream>
#include <algorithm>
using namespace std;

class problem {
public :
	int score;      // 문제 점수
	int num;        // 문제 번호
};

bool cmp(problem a, problem b) {
	return a.score > b.score;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	problem* p = new problem[8];

	int sum = 0;
	int arr[8]; 

	for (int i = 0; i < 8; i++) {
		cin >> p[i].score;
		p[i].num = i + 1;
	}

	stable_sort(p, p + 8, cmp);

	for (int i = 0; i < 5; i++) {
		sum += p[i].score;
		arr[i] = p[i].num;
	}

	sort(arr, arr + 5);

	cout << sum << "\n";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}