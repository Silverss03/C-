#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int m, n, res = -1 ;
		cin >> m >> n ;
		int arr[m][n];
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++) cin >> arr[i][j] ;
		}
		for(int i = 1 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				if(j == 0) arr[i][j] += max(arr[i-1][j], arr[i-1][j + 1]) ;
				else if(j == n - 1) arr[i][j] += max(arr[i-1][j - 1], arr[i - 1][j]) ;
				else{
					int max = -1 ;
					for(int k = -1 ; k < 2 ; k++) if(arr[i - 1][j - k] > max) max = arr[i - 1][j - k] ;
					arr[i][j] += max ;
				}
				if(arr[i][j] > res) res = arr[i][j] ;
			}
				
		}
		cout << res << endl; 
	}
		
}

