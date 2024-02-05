#include <bits/stdc++.h>
using namespace std ;

int arr[101][101], m, n, res = 0 ;
bool check[101][101] ;

void Try(int r, int c){
	if(r == m && c == n){
		res++ ;
		return ;
	}
	if(r < m && !check[r + 1][c]) Try(r + 1, c) ;
	if(c < n && !check[r][c + 1]) Try(r, c + 1) ;	
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		res = 0 ;
		cin >> m >> n ;
		memset(check, false, sizeof(check)) ;
		for(int i = 1 ; i <= m ; i++){
			for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
		}
		Try(1,1) ;
		cout << res << endl ;
	}
}

