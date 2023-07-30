#include <iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int i = 1, diff = 0;
    int num;
    cin >> num;
    
    for (int sum = 0; sum+i < num; i++){
        sum += i;
        diff = num - sum;
    }
    
    if (num == 1) cout << "1/1";
    else if (i%2 == 1)
        printf("%d/%d", i-diff+1, diff);
    else printf("%d/%d", diff, i-diff+1);
    
    return 0;
}