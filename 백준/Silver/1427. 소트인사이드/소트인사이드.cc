#include <iostream>
using namespace std;
string arr;
string input;

void merge (int s, int m, int e){
    int i = s; 
    int k = s; // Sorting 시작되는 첫 index
    int j = m+1; // 가운데+1번째 index

    while (i <= m && j <= e) { // 비교하면서 원소 넣기
        if (input[i] >= input[j])
            arr[k++] = input[i++];
        else arr[k++] = input[j++];
    }

    if (i > m) { // 원소가 남으면 그대로 배열에 넣음 (이미 정렬되어 있으므로)
        for (int z = j; z <= e; z++) 
            arr[k++] = input[z];
    } else {
        for (int z = i; z <= m; z++) 
            arr[k++] = input[z];
    }

    for(int z = s; z <= e; z++) {
        input[z] = arr[z];
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
    cin >> input;

    mergesort(0,input.length()-1);

    for (int i = 0; i < input.length(); i++) {
        cout << input[i];
    }

    return 0;
}