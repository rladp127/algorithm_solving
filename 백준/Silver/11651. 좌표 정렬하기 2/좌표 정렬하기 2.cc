#include <stdlib.h>
#include <iostream>
using namespace std;

typedef struct { // 좌표 저장할 구조체 선언
    int x;
    int y;
} point;

point sort[100001]; // 정렬한 좌표 넣을 배열

void merge(point* arr, int first, int mid, int last) {
    int i, j, k;
    i = first;
    j = mid + 1;
    k = first; // index 관리할 변수

    while (i <= mid && j <= last) { // 정렬 과정
        if (arr[i].y < arr[j].y) 
            sort[k++] = arr[i++];
        else if (arr[i].y > arr[j].y)
            sort[k++] = arr[j++];
        else { // y 좌표가 서로 같을 때
            if (arr[i].x < arr[j].x)
                sort[k++] = arr[i++];
            else if (arr[i].x > arr[j].x)
                sort[k++] = arr[j++];
        }
    }

    if (i <= mid) {
        while (i <= mid) 
            sort[k++] = arr[i++];
    }
    else {
        while (j <= last) 
            sort[k++] = arr[j++];
    }
  
    for (k = first; k <= last; k++) 
        arr[k] = sort[k];
}

void mergesort(point* arr, int first, int last) {
    int mid;
    if (first < last) {
        mid = (first + last) / 2;
        mergesort(arr, first, mid); // 배열 왼쪽 부분 정렬
        mergesort(arr, mid + 1, last); // 배열 오른쪽 부분 정렬
        merge(arr, first, mid, last);
    }
}

int main() {  
    cin.tie(NULL);
  
    int n;
    cin >> n;

    point* arr = (point*)malloc(sizeof(point)*n); // n개 만큼 동적할당
  
    for (int i = 0; i < n; i++)
      cin >> arr[i].x >> arr[i].y;
    
    mergesort(arr, 0, n-1);
  
    for (int i = 0; i < n; i++)
      cout << arr[i].x << " " << arr[i].y << '\n';

    return 0;
}