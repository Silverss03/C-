#include <bits/stdc++.h>
using namespace std ;

int min(int a, int b, int c){
	if(a < b && a < c) return a ;
	else if(b < a && b < c ) return b ;
	else return c ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int m,n, max = -1 ;
		cin >> m >> n ;
		int arr[m][n] ;
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++) cin >> arr[i][j] ;
		}
		for(int i = 1 ; i < m; i++){
			for(int j = 1; j < n ; j++){
				if(arr[i][j] != 0){
					arr[i][j] = min(arr[i-1][j], arr[i-1][j-1], arr[i][j-1]) + 1;
					if(arr[i][j] > max) max = arr[i][j] ;
				}
				else{
					arr[i][j] = arr[i][j] ;
				}
			}
		}
		cout << max << endl ;
	}
}
