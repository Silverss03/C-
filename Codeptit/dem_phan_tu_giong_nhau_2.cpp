#include <bits/stdc++.h>

using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, res = 0 ; 
		cin >> n ;
		int arr[n][n] ;
		map <int, int> mp ;
		set <int> st ;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				cin >> arr[i][j] ;
				if(i == 0){
					mp[arr[i][j]] = 1 ;
				}
				else{
					if(mp[arr[i][j]] == i){
						mp[arr[i][j]]++;
					}
				}
			}
		}
		for(auto x : mp){
			if(x.second == n) res++ ;
		}
		cout << res << endl ;
	}
}
