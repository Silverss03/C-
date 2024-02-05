#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k, res = 0 ;
		cin >> n >> k ;
		int arr[n] ; 
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		for(int i = 0 ; i < n ; i++){
			for(int j = i + 1 ; j < n ; j++) if(arr[i] + arr[j] == k) res++ ;
		}
		cout << res << endl ; 
	}
}
