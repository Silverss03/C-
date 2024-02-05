#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
	int tests ; 
	cin >> tests ;
	while(tests--)
	{
		int n, x, y, z ; 
		cin >> n >> x >> y >> z ; 
		int dp[1002] ;
		memset(dp, 0, sizeof(dp)) ;
		dp[1] = x ;
		for(int i = 2 ; i <= n ; i++)
		{
			if(i % 2 == 0)
				dp[i] = min(dp[i - 1] + x , dp[i / 2] + z) ;
			else
			{
				int tmp = min( dp[i/2] + z + x, dp[i/2 + 1] + z + y) ;
				dp[i] = min(tmp, dp[i - 1] + x) ;
			}
		}
		cout << dp[n] << endl ;
	}
}

