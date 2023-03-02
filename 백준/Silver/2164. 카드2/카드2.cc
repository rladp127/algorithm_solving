#include <iostream>
using namespace std;
int queue[10000000];

  int main() {  
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;

    for (int i=0; i<N; i++) {
        queue[i] = i+1;
    }
    
    int rear = N;
    int front = 0;
    int count = 0;

    while(1) {
      // cout << "loop\n";
      front++;
      count++; 
      // cout << "numbers "<< count << '\n';
      // cout << "get in " << queue[front] << '\n';
      queue[rear++] = queue[front++]; 
      if (count+1 == N || N==1) break;
    }
    
    if (N==1) cout << '1';
    else cout << queue[rear-1];

    return 0;
  }
