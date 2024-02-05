#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k, res = -1, pos ;
		cin >> n >> k ;
		int arr[n] ; 
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		sort(arr, arr + n) ;
		for(int i = 0 ;i < n ; i++) if(arr[i] >= k) pos = i ;
		for(int i = pos ; i < n ; i++){
			for(int j = 0 ; j < pos ; j++){
				if(arr[i] - arr[j] == k){
					res = 1 ;
					break ;
				}
			}
			if(res == 1) break ;
		}
		cout << res << endl ; 
	}
}
