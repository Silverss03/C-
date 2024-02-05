#include <bits/stdc++.h>
using namespace std ;

int main(){
	int m, n, p, i, j, k ;
	cin >> n >> m >> p ;
	int A[n][m], B[m][p], res[n][p] ;
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < m ; j++) cin >> A[i][j] ;
	}
	for(i = 0 ; i < m ; i++){
		for(j = 0 ; j < p ; j++) cin >> B[i][j] ;
	}
	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < p ; j++){
			res[i][j] = 0 ;
			for(k = 0 ; k < m ; k++){
				res[i][j] += A[i][k] * B[k][j] ;
			}
			cout << res[i][j] << " " ;
		}
		cout << endl ;
	}
}
