#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		long long n, i ;
		cin >> n ;
		long long dp[n + 2], arr[n] ;
		memset(dp, 0 , sizeof(dp)) ;
		for(i = 1 ; i <= n ; i++) 
			cin >> arr[i] ;
		dp[1] = arr[1] ;
		dp[2] = max(arr[2], arr[1]) ;
		for(i = 3 ; i <= n ; i++)
			dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]) ;
		cout << dp[n] << endl ;
	}
}

