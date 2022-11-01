#include <iostream>
using namespace std;
int heap[100000];

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
  int main() {  
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int casenum;
    cin >> casenum;
    
    int index = 0;
    
    for (int i = 0; i < casenum; i++) {
      int n;
      cin >> n;

      if (n == 0) { // pop
        if (index == 0) 
        { cout << "0\n"; continue; }
        int ret = heap[1];
    
        swap(&heap[1], &heap[index]);
        index--;
        
        int parent = 1;
        int child = parent*2;
        
        if(child+1 <= index){
            child = (heap[child]>heap[child+1]) ? child : child+1;
        }
        
        while (child <= index && heap[child] > heap[parent]){
            swap(&heap[child], &heap[parent]);
            parent = child;
            child = parent*2;
            
            if (child+1 <= index){
                child = (heap[child] > heap[child+1])? child : child+1;
            }
        }
        
        cout << ret << '\n';
      }

      else if (n != 0){ // push
        heap[++index] = n;
    
        int child = index;
        int parent = child/2;
        
        while(child>1 && heap[child]>heap[parent]){
          swap(&heap[child], &heap[parent]);
          child = parent;
          parent = child/2;
        }
      }
    }
      return 0;
  }
