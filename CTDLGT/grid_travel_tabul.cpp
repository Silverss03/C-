#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int m, n ; 
		cin >> m >> n ;
		long long dp[102][102] ;
		memset(dp, 0, sizeof(dp)) ;
		dp[1][1] = 1 ;
		for(int i = 1 ; i <= m ; i++)
		{
			for(int j = 1 ; j <= n ; j++)
			{
				if(i - 1 >= 0 && j - 1 >= 0) dp[i][j] += (dp[i - 1][j] + dp[i][j - 1]) ;
			}
		}
		cout << dp[m][n] << endl ;
	}
}

