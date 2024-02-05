#include <iostream>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, m, res = 0;
		cin >> n >> m ; 
		int arr[502][502], dp[502][502] ;
		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1 ; j <= m ; j++) 
			{
				cin >> arr[i][j] ;
				dp[i][j] = arr[i][j] ;
			}
		}
		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1 ; j <= m ; j++)
			{
				if(dp[i][j] == 0) continue ;
				else
					dp[i][j] = min(dp[i - 1][j], min(dp[i - 1][j - 1], dp[i][j - 1])) + 1;
				res = max(res, dp[i][j]) ;	
			}
		}
		cout << res << endl ;
	}
}

