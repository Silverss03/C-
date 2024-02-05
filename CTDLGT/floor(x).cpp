#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ; 
	while(tests--){
		long long n, k;
		cin >> n >> k ;
		vector<long long> arr(n) ;
		for(long long i = 0 ; i < n ; i++) cin >> arr[i] ;
		long long pos = upper_bound(arr.begin(), arr.end(), k) - arr.begin() ;
		if(pos > 0)cout << pos << endl ;
		else cout << -1 << endl ;
	}
}
