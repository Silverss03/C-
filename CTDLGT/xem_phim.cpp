#include <bits/stdc++.h>
using namespace std ; 

int main(){
	int c, n, res = 0 ; 
	cin >> c >> n ; 
	int arr[n] ; 
	for(int i = 1 ; i <= n ; i++) cin >> arr[i] ; 
	int dp[102][2502] ;
	memset(dp, 0, sizeof(dp)) ;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= c ; j++){
			if(arr[i] > j){
				dp[i][j] = dp[i - 1][j] ;
			}
			else{
				dp[i][j] = max(dp[i - 1][j - arr[i]] + arr[i], dp[i - 1][j]) ;
			}
			res = max(res, dp[i][j]) ;
		}
	}
	cout << res << endl ;
}
