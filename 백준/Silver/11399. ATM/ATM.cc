#include <iostream>
using namespace std;
int arr[1000];
int sortedarr[1000]; // 정렬된 것 넣는 곳

void merge (int s, int m, int e) {
    int i = s; 
    int k = s; // Sorting 시작되는 첫 index
    int j = m+1; // 가운데+1번째 index

    while (i <= m && j <= e) { // 비교하면서 원소 넣기
        if (arr[i] <= arr[j])
            sortedarr[k++] = arr[i++];
        else sortedarr[k++] = arr[j++];
    }

    if (i > m) { // 원소가 남으면 그대로 배열에 넣음 (이미 정렬되어 있으므로)
        for (int z = j; z <= e; z++) 
            sortedarr[k++] = arr[z];
    } else {
        for (int z = i; z <= m; z++) 
            sortedarr[k++] = arr[z];
    }

    for (int z = s; z <= e; z++) {
        arr[z] = sortedarr[z];
    }
    
}

void mergesort(int start, int end) {
    if (start < end) {
        int mid = (start+end)/2;
        mergesort(start, mid);
        mergesort(mid+1, end);
        merge(start, mid, end);
    }
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int casenum;
    cin >> casenum;

    for (int i = 0; i < casenum; i++) {
        cin >> arr[i];
    }

    int time = 0;
    mergesort(0, casenum-1);


    for (int i = 0; i < casenum; i++) {
        for (int j = 0; j <= i; j++) {
            time += arr[j];
        }
    }

    cout << time;
}