#include <bits/stdc++.h>
using namespace std ;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1 ,1 } ;
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1 } ;
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, m ;
		cin >> n >> m ;
		int arr[n][m], res[n][m] ;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++) cin >> arr[i][j] ;
		}
		for(int i = 0; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				int sum = arr[i][j] ;
				for(int k = 0 ; k < 8 ; k++){
					int n_i = i + dx[k], n_j = j + dy[k] ;
					if(n_i >= 0 && n_i < n && n_j >= 0 && n_j < m){
						sum += arr[n_i][n_j]  ;
					}
				}
				cout << sum << " " ;
			}
			cout << endl ;
		}
		
	}
}
