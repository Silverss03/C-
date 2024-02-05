#include <bits/stdc++.h>
using namespace std ;

int count(int arr[][21], int m, int n, int k){
	if(m < 0 || n < 0) return 0 ;
	if(m == 0 && n == 0) return (k == arr[m][n]) ;
	return count(arr, m - 1, n, k - arr[m][n]) + count(arr,m, n - 1, k - arr[m][n]) ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k ;
		cin >> n>> k ;
		int arr[21][21] ;
		for(int i = 0 ; i < n ;i++){
			for(int j = 0 ; j < k ; j++) cin >> arr[i][j] ;
		}
		cout << count(arr, n - 1, n - 1 , k) << endl ;
	}
}
