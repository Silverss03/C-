#include <iostream>
using namespace std;

int main()
{
	int tests ; 
	cin >> tests ;
	while(tests--)
	{
		int m, n, tmp ;
		cin >> m >> n ;
		for(int i = 0 ; i < m*n ; i++) cin >> tmp ;
		long long dp[m + 1][n + 1] ;
		dp[0][0] = 0 ;
		for(int i = 1 ; i <= 100 ; i++)
		{
			dp[0][i] = 0 ;
			dp[1][i] = 1 ;
		}
		for(int i = 1 ; i <= 100 ; i++)
		{
			dp[i][0] = 0 ;
			dp[i][1] = 1 ;
		}
		for(int i = 2 ; i <= m ; i++)
		{
			for(int j = 2 ; j <= n; j++)
			{
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1] ;
			}
				
		}
		cout << dp[m][n]  << endl ;
	}
}

