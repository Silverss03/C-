#include <iostream>
using namespace std;

int modulo = 1e9 + 7 ;
int main()
{
	int tests ;
	cin >> tests ;
	long long dp[1002][1002] ; 
	for(int i = 0 ; i < 1002 ; i++)
	{
		dp[i][0] = 1 ;
	}
	for(int i = 1 ; i < 1002 ; i++)
	{
		for(int j = 1 ; j < 1002 ; j++)
		{
			dp[i][j] = ( dp[i - 1][j] + j * dp[i - 1][j - 1] ) % modulo ; 
		}
	}
	while(tests--)
	{
		int n, k ;
		cin >> n >> k ;
		cout << dp[n][k] << endl ;
	}
}

