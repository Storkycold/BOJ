#include <iostream>
#include <algorithm>
#define MAX 1000001

using namespace std;

int dp[MAX]; 

int main() {

	int n; 
	cin >> n;

	dp[0] = 1;
	dp[1] = 1;  

	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
		dp[i] %= 15746; 
	}

	cout << dp[n] << "\n";
}