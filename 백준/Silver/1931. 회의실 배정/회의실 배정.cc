#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> node;
  int begin, end;

  for (int i = 0; i < N; i++) {
    cin >> begin >> end;
    node.push_back(make_pair(end, begin));
  }

  sort(node.begin(), node.end());
    
  int time = node[0].first;
  int tot = 1;

  for (int i = 1; i < N; i++) {
    if (time <= node[i].second) {
      tot++;
      time = node[i].first;
    }
  }

  cout << tot;
  
  return 0;
}