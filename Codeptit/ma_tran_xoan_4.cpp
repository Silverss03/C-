#include <bits/stdc++.h>
using namespace std ;

void spiral_matrix( int n, int m, int arr[100][100], int res[]){
	int r = 0, c = 0, count = 0 ;
	while(r < n && c < m){
		for(int i = c ; i < m ; i++) arr[r][i] = res[count++] ; 
		r++ ;
		for(int i = r ; i < n ; i++) arr[i][m - 1] = res[count++];
		m-- ;
		if(r < n){
			for(int i = m - 1 ; i >= c ; i--) arr[n - 1][i] = res[count++] ;
			n-- ;
		}
		if(c < m){
			for(int i = n - 1 ; i >= r ; i--) arr[i][c] = res[count++] ;
			c++ ;
		}
	}
}

int main(){
	int num, count = 0 ; 
	cin >> num ;
	int arr[num*num], res[100][100] ;
	for(int i = 0 ; i < num*num ; i++) cin >> arr[i] ;
	sort(arr, arr + (num*num)) ;
	spiral_matrix(num, num, res, arr) ;
	for(int i = 0 ; i < num ; i++){
		for(int j = 0 ; j < num ; j++) cout << res[i][j] << " ";
		cout << endl ;
	}
}
