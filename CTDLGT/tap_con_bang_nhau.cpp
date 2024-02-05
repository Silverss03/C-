#include <iostream>
using namespace std ;

int n ,arr[102], sum ;  
bool dp[102][10002] ;
int main()
{
	int tests ; 
	cin >> tests ; 
	while(tests--)
	{
		sum = 0 ;
		cin >> n ;
		for(int i = 1 ; i <= n ; i++)
		{
			cin >> arr[i] ; 
			sum += arr[i] ; 
		}
		if(sum % 2 == 0)
		{
			dp[0][0] = true ;
			for(int i = 1 ; i <= n ; i++)
			{
				for(int j = 1 ; j <= sum ; j++)
				{
					dp[i][j] = dp[i - 1][j] ;
					if(arr[i] <= j) dp[i][j] = dp[i - 1][j - arr[i]] || dp[i - 1][j];
				}
			}
			if(dp[n][sum/2]) cout << "YES" << endl;
			else cout <<"NO" << endl ;
		}
		else cout << "NO\n" ;
	}
}
