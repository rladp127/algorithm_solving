#include <stdio.h>

int main(void) {
  int num;
  scanf("%d", &num);

  while(num != 1) {
    for (int i = 2; i <= num; i++) {
      if(num%i == 0) {
        printf("%d\n", i);
        num /= i;
        break;
      }
    } 
  }
  
  return 0;
}