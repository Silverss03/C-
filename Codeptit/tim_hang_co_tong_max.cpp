#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, m, max = -10e9 ; 
		cin >> n >> m ;
		long long arr[n][m] ;
		for(int i = 0 ; i < n; i++){
			long long sum = 0 ;
			for(int j = 0 ; j < m ; j++){
				cin >> arr[i][j] ;
				sum += arr[i][j] ;
			}
			if(sum > max) max = sum ;
		}
		cout << max << endl ;
		for(int i = 0 ; i < n; i++){
			long long sum = 0 ;
			for(int j = 0 ; j < m ; j++){
				sum += arr[i][j] ;
			}
			if(sum == max) cout << i + 1 << " ";
		}
		cout << endl ;
	}
}
