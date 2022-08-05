#include <stdio.h>
/*
246913
*/

int main(void) {
  int a[246913] = {0, };
  
  a[0] = 1; 
  a[1] = 1;
  for (int i = 2; i < 246913; i++) {
    for (int j = 2 * i; j <= 246913; j+=i)
      if (a[j] == 0) a[j] = 1;
  }
  
  int input;
  
  while(1) {
    int count = 0;
    scanf("%d", &input);
    if (input == 0) break;
    for (int i = input + 1; i <= input * 2; i++) {
      if (a[i] == 0) count++;
    }
    printf("%d\n", count);
  }
}