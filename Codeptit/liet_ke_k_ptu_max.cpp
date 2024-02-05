#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k, c = 0 ;
		cin >> n >> k ;
		int arr[n] ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		sort(arr, arr + n) ;
		for(int i = n - 1 ; i >= 0 ; i--){
			if(k > 0 ){
				cout << arr[i] << " " ;
				k-- ; 
			}
		}
		cout << endl ;
	}
}
