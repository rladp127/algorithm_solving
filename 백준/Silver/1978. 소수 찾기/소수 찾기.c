#include <stdio.h>

int main() {
  int N, n;
  int num = 0;

  scanf("%d", &N);
  for (int j = 0; j < N; j++) {
    int cnt = 0;
    scanf("%d", &n);

    if (n == 1) continue;
    
    for (int i = 2; i < n; i++) {
      if (n % i == 0) cnt++;
    }
    if (cnt == 0) num++;
  }
  printf("%d", num);
  
  return 0;
}