#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000001] = {0, };

int main() {
	int n;
	cin >> n;
	
	for (int i = 2; i <= n; i++) {
		//1을 빼는 경우
		dp[i] = dp[i - 1] + 1;
		//2로 나눠지는 경우
		if (i % 2 == 0) {
      if (dp[i/2] + 1 < dp[i]) dp[i] = dp[i/2] + 1;
		}
		//3으로 나눠지는 경우
		if (i % 3 == 0) {
      if (dp[i/3] + 1 < dp[i]) dp[i] = dp[i/3] + 1; 
		}
	}
    
	cout << dp[n] << '\n';
  
	return 0;
}