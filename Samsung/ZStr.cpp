#include <bits/stdc++.h>
using namespace std;

int main()
{
	int len = 0 ; 
	string a, b ; 
	cin >> a >> b ;
	int dp[102][102] ; 
	memset(dp, 0, sizeof(dp)) ;
	for(long unsigned int i = 1 ; i <= a.size() ; i++){
		for(long unsigned int j = 1 ; j <= b.size() ; j++){
			if(a[i - 1] == b[j - 1]){
				dp[i][j] = dp[i - 1][j - 1] + 1 ;
			}
			else{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) ;
			}
			len = max(len, dp[i][j]) ; 
		}
	}
	cout << a.length() + b.length() - len ; 
}

