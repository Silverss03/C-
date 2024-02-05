#include <bits/stdc++.h>
using namespace std ;

struct stuff{
	int val, weight ;
};

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, v, dp[1002][1002], res = 0 ;
		cin >> n >> v ;
		stuff arr[1002] ; 
		for(int i = 1 ; i <= n ; i++){
			cin >> arr[i].weight ;
		}
		for(int i = 1 ; i <= n ; i++){
			cin >> arr[i].val ;
		}
		memset(dp, 0, sizeof(dp)) ;
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= v ; j++){
				if(arr[i].weight > j){
					dp[i][j] = dp[i - 1][j] ;
				}
				else{
					dp[i][j] = max(dp[i - 1][j - arr[i].weight] + arr[i].val, dp[i - 1][j]) ;
				}
				res = max(res, dp[i][j]) ;
			}
		}
		cout << res << endl ;
	}	
}
