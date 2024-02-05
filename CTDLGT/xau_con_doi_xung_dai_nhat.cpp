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
		memset(dp, false, sizeof(dp)) ;
		for(int i = 0 ; i < n ; i++)
			dp[i][i] = true ; 
		for(int i = 0 ; i < n - 1 ; i++)
		{
			if(s[i] == s[i + 1]) {
				dp[i][i + 1] = true ;
			}
		}
		for(int len = 2 ; len < n ; len++)
		{
			for(int i = 0 ; i < n - len ; i++)
			{
				int j = i + len ;
				if(dp[i + 1][j - 1] && s[i] == s[j])
				{
					dp[i][j] = true; 
				}
			}
		}
		for (int i = 0; i < n; i++) {
	        for (int j = i; j < n; j++) {
	            if (dp[i][j]) {
	                int len = j - i + 1;
	                res = max(len, res) ;
	            }
	        }
    	}
		cout << res << endl ;
	}
}

