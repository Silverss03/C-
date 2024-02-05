#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long n, com, res = 10e7 + 1, sum = 0, l = 0 ;
		cin >> n >> com ;
		int arr[n] ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		for(int r = 0 ; r < n ; r++){
			sum += arr[r] ;
			while(sum > com){
				if(r - l + 1 < res) res = r - l + 1 ;
				l++ ;
				sum -= arr[l] ;
			}
		}
		if(res != 10e7 + 1) cout << res << endl ;
		else cout << "-1\n" ;
	}
}
