#include <stdio.h>

int main() {
  int a[10001] = {0, };
  
  a[0] = 1; 
  a[1] = 1;
  for (int i = 2; i < 10001; i++) {
    for (int j = 2 * i; j <= 10001; j+=i)
      if (a[j] == 0) a[j] = 1;
  }

  int test; 
  int num;
  int half;
  scanf("%d", &test);

  for (int i = 0; i < test; i++) {
    scanf("%d", &num);
    half = num / 2;

    for (int j = half; j > 0; j--) {
      if(a[j] != 1 && a[num - j] != 1) {
        printf("%d %d\n", j, num - j);
        break;
      }
    }
  }
}