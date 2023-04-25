#include <iostream>
using namespace std;

int score[5];

int main() {
  int aver = 0;

	for (int i = 0; i < 5; i++) {
    cin >> score[i];
    if (score[i] < 40) score[i] = 40;
    aver += score[i];
  }

  aver = aver/5;
  
  cout << aver;
  
	return 0;
}