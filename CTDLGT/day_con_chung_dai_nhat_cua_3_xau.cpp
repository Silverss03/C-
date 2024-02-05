#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int tests ; 
	cin >> tests ; 
	while(tests--)
	{
		int l1, l2 , l3 ;
		cin >> l1 >> l2 >> l3 ;
		string a, b ,c ; 
		cin >> a >> b >> c ;
		int res = 0 ;
		int dp[102][102][102] ;
		memset(dp, 0, sizeof(dp)) ;
		for(int i = 1 ; i <= l1 ; i++)
		{
			for(int j = 1 ; j <= l2 ; j++)
			{
				for(int k = 1 ; k <= l3 ; k++)
				{
					if(a[i - 1] == b[j - 1]&& a[i - 1] == c[k - 1] && b[j - 1] == c[k -1])
						dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1 ;
					else
					{
						int tmp = max(dp[i - 1][j][k], dp[i][j - 1][k]) ;
						dp[i][j][k] = max(tmp, dp[i][j][k - 1]) ;
					}
					res = max(res, dp[i][j][k]) ;
				}
			}
		}
		cout << res << endl ;
	}
}

