#include <stdio.h>

int main(void) {
  int M, N;
  int sum = 0, min;
  scanf("%d", &M);
  scanf("%d", &N);
  if (M == 1) M++;
  
  int val = 0; // 최솟값을 찾기 위한 값
  for (int i = M; i <= N; i++) {
    int n = 0;
    for (int j = 2; j < i; j++)
      if (i % j == 0) n++;
    if (n == 0) { // 소수인 경우
      sum += i;
      if (val == 0) {
        val = 1; min = i; // 최솟값 저장
      }
    }
  }
  
  if (sum == 0) printf("-1");
  else { printf("%d\n", sum);
  printf("%d", min); }

  return 0;
}