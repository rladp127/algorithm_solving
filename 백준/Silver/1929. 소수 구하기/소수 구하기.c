#include <stdio.h>
/*
에라토스테네스의 체
: 배열에 소수인 수는 0, 아닌 수는 1 저장
2,3,4..n의 배수는 소수가 아님
*/

int main(void) {
  int a[1000001] = {0, };
  
  int s, e;
  scanf("%d %d", &s, &e); 
  a[0] = 1; a[1] = 1;
  for (int i = 2; i <= e; i++) {
    for (int j = 2 * i; j <= e; j+=i)
      if (a[j] == 0) a[j] = 1;
  }

  for (int i = s; i <= e; i++) {
    if (a[i] == 0) printf("%d\n", i);
  }
  
  return 0;
}