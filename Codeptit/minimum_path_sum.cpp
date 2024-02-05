#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long m, n ;
		cin >> m >> n ;
		int arr[m][n];
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++) cin >> arr[i][j] ;
		}
		for(int i = 0 ; i < m ; i++){
			for(int j = 0 ; j < n ; j++){
				if(i == 0 && j == 0) continue ;
				else if(j == 0) arr[i][j] += arr[i-1][j] ;
				else if(i == 0) arr[i][j] += arr[i][j- 1] ;
				else arr[i][j] += min(arr[i][j - 1], arr[i - 1][j]) ;
			}
		}
		cout << *max_element(arr[m - 1], arr[m - 1] + n) << endl; 
	}
		
}

