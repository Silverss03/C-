#include <bits/stdc++.h>
using namespace std ;

void spiral_matrix( int n, int m, int arr[100][100]){
	int r = 0, c = 0 ;
	while(r < n && c < m){
		for(int i = c ; i < m ; i++) cout << arr[r][i] << " "; 
		r++ ;
		for(int i = r ; i < n ; i++) cout << arr[i][m - 1] << " ";
		m-- ;
		if(r < n){
			for(int i = m - 1 ; i >= c ; i--) cout << arr[n - 1][i] << " " ;
			n-- ;
		}
		if(c < m){
			for(int i = n - 1 ; i >= r ; i--) cout << arr[i][c] << " " ;
			c++ ;
		}
	}
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int m, n ;
		cin >> n >> m ; 
		int arr[100][100] ;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++) cin >> arr[i][j] ;
		}
		vector <int> res ;
		spiral_matrix(n, m, arr) ;
		cout << endl ;
	}
}
