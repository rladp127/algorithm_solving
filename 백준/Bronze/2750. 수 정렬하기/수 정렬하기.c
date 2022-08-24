#include <stdio.h>

int main() {
    int N;
    int num[1024] = {0, };
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) scanf("%d", &num[i]);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if(num[i] < num[j]) {
                int tmp = num[i];
                for (int z = i; z >= j; z--) {
                  num[z] = num[z-1];
                }
                num[j] = tmp;
                break;
            } 
        }
    }
    
    for (int i = 0; i < N; i++) {
        printf("%d\n", num[i]);
    }
    
    return 0;
}