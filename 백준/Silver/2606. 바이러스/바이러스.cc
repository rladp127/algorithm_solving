#include <iostream>
#include <vector>
using namespace std;

vector<int> graph[101];
int visited[101] = {0, };
int output = 0;

void dfs(int n) {
    visited[n] = 1;
    for (int j = 0; j < graph[n].size(); j++) {
        int a = graph[n][j];

        if (visited[a] != 1) {     
            output++;
            dfs(a);
        }
    }
    
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int node_number, branches;
    cin >> node_number >> branches;

    for (int i = 0; i < branches; i++) {
        int num1, num2;
        cin >> num1 >> num2;

        graph[num1].push_back(num2);
        graph[num2].push_back(num1);
    }

    dfs(1);
    cout << output;

    return 0;
}