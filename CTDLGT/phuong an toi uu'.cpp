#include <iostream>
#include <cstring>
using namespace std;

int sol[102], n, cap, res ;
struct stuff{
	int val, weight ;	
};

stuff arr[102] ;
void out()
{
	int sum = 0 ;
	for(int i = 1 ; i <= n ; i++) 
		sum += arr[i].val * sol[i] ;
	if(sum == res)
	{
		for(int i = 1 ; i <= n ; i++)
			cout << sol[i] << " " ;
		cout << endl ; 
	}	
}

void bin_generate(int i)
{
	for(int j = 0 ; j <= 1 ; j++)
	{
		sol[i] = j ; 
		if(i == n) 
			out () ; 
		else
			bin_generate(i + 1) ;
	}
}

int main()
{
	res = 0 ;
	cin >> n >> cap ;
	int dp[102][102] ;
	memset(dp, 0 , sizeof(dp)) ;
	for(int i = 1 ; i <= n ; i++)
		cin >> arr[i].val ;
	for(int i = 1 ; i <= n ; i++)
		cin >> arr[i].weight ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= cap ; j++)
		{
			if(arr[i].weight > j)
				dp[i][j] = dp[i - 1][j] ;
			else
				dp[i][j] = max(dp[i - 1][j - arr[i].weight ] + arr[i].val , dp[i - 1][j]) ;
			res = max(res, dp[i][j]) ;
		}
	}
	cout << res << endl; 
	bin_generate(1) ;
}

