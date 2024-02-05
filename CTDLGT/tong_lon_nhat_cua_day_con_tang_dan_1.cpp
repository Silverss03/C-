#include <iostream>
using namespace std;

int main()
{
	int tests ; 
	cin >> tests ;
	while(tests--)
	{
		int n, res = 0 ; 
		cin >> n ;  
		int arr[1002], dp[1002] ;
		for(int i = 1 ; i <= n ; i++) cin >> arr[i] ;
		dp[1] = arr[1] ;
		res = dp[1] ;
		for(int i = 2 ; i <= n ; i++)
		{
			dp[i] = arr[i] ;
			for(int j = i - 1; j >= 1 ; j--)
			{
				if(arr[j] < arr[i]) 
				{
					dp[i] = max(dp[i], arr[i] + dp[j]) ;
					break ;
				}
			}
			res = max(res, dp[i]) ;
		}
		cout << res << endl ;
	}
}

