#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, m ; 
		cin >> n >> m ; 
		int arr[505][505], dp[505][505] ;
		memset(dp, 0 , sizeof(dp)) ;
		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1; j <= m ; j++) cin >> arr[i][j] ;
		}
		for(int i = 1 ; i <= m ; i++)
			dp[1][i] = arr[1][i] + dp[1][i - 1] ;
		for(int j = 2; j <= n ; j++)
			dp[j][1] = arr[j][1] + dp[j - 1][1] ;
		for(int i = 2 ; i <= n ; i++)
		{
			for(int j = 2; j <= m ; j++ )
			{
				dp[i][j] = arr[i][j] + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1])) ;
			}
		}
		/*
		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1; j <= m ; j++) cout << i << " " << j << " " << dp[i][j] << endl;
		} 
		*/
		cout << dp[n][m] << endl ;
	}
}

