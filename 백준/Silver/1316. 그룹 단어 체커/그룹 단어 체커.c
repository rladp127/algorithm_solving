#include <stdio.h>
#include <string.h>

int main(){
  int num, i, j, count = 0;
  int alpa[26] = {0, };
  int countCheck = 0;
  
  scanf("%d", &num);
  char word[101];
  
  for (i = 0; i < num; i++){
    scanf("%s", word);
    
    for (j = 0; j < strlen(word); j++){
      if (word[j] != word[j+1])
        alpa[(int)word[j] - 97]++;
    }
    for (j = 0; j < 26; j++) {
      if (alpa[j] > 1) countCheck = 1;
      alpa[j] = 0;
    }
    if (countCheck == 0) count++;
    countCheck = 0; 
  }
  printf("%d", count);
}