#include <stdio.h>

int main() {
  int N, n; // 반복문을 위한 변수 N, 입력 받은 숫자 저장할 변수 n
  int num = 0; // 소수의 개수 저장할 변수 num

  scanf("%d", &N);
  for (int j = 0; j < N; j++) {
    int cnt = 0;
    scanf("%d", &n); // 이런 식으로 원하는 횟수만큼! 입력 받을 수 있음

    if (n == 1) continue; // 1의 경우 다음 반복문으로 넘어감
    
    for (int i = 2; i < n; i++) { // 2 ~ n-1 까지 나누어 봄
      if (n % i == 0) cnt++;
    }
    if (cnt == 0) num++;
  }
  printf("%d", num);
  
  return 0;
}
