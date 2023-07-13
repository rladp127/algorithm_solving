#include <iostream>
using namespace std;
int score[1000] = {0,};

int main () {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int case_num;
  double result;
  cin >> case_num;

  for (int i = 0; i < case_num; i++) {
    int N, sum = 0, count = 0;
    cin >> N;
    
    for (int j = 0; j < N; j++) {
      cin >> score[j];
      sum += score[j];
    }
    
    double aver = sum / N;
    for (int j = 0; j < N; j++) {
      if (aver < score[j]) count++;
    }

    result = (double)count / N * 100;
    printf("%.3f%%\n", result);
  }

  return 0;
}