#include <iostream>
#include <cstring>
using namespace std ;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int res = 0 ; 
		string s ; 
		cin >> s ;
		int n = s.length() ; 
		bool dp[1002][1002] ;
		memset(dp, false , sizeof(dp)) ;
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = i ; j >= 0 ; j--)
			{
				if(i == j) dp[i][j] = true ;
				else
				{
					if(s[i] == s[j]) 
					{
						if(i - j == 1) dp[i][j] = true ;
						else
						{
							dp[i][j] = dp[i - 1][j + 1] ;
						}
					}
				}
				if(dp[i][j])
				{
					//cout << i << " " << j << endl ;
					res = max(res, i - j + 1) ;
				}
			}
		}
		cout << res << endl; 
	}
}
