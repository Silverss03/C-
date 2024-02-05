#include <bits/stdc++.h>
using namespace std ;

int dx[8] = {-1, -1, -1, 0, 0 , 1, 1 ,1} ;
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1 } ;

void dfs(int i, int j, int arr[100][100],int m, int n){
	arr[i][j] = 0 ;
	for(int k = 0 ; k < 8 ; k++){
		int n_i = i + dx[k], n_j = j + dy[k] ;
		if(n_i >= 0 && n_i < m && n_j >= 0 && n_j < n && arr[n_i][n_j]){
			dfs(n_i,n_j,arr,m,n) ;
		}
	}
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int m, n, res = 0 ; 
		cin >> m >> n; 
		int arr[100][100] ;
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++) cin >> arr[i][j] ;
		}
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				if(arr[i][j] == 1){
					res++ ;
					dfs(i,j,arr,m,n) ;
				}
			}
		}
		cout << res << endl; 
	}
}
