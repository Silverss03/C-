#include <iostream>
#include <cstring>
#include <map>
using namespace std;

int n, k, arr[1002], modulo = 1e9 + 7 ; 

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{	
		cin >> n >> k ;
		int dp[100002] ;
		memset(dp, 0, sizeof(dp)) ;
		dp[0] = 1; 
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		for(int i = 1 ; i <= k ; i++)
		{
			for(int j = 0 ; j < n ; j++)
			{
				if(i - arr[j] >= 0)
				{
					dp[i] += dp[i - arr[j]] ;
					dp[i] %= modulo ;
				}
			}
		}
		cout << dp[k] << endl ;
	}
}
