#include <bits/stdc++.h>
using namespace std ;

int main(){
	long long n, k, ans = 0;
	cin >> n >> k ;
	int arr[n] ;
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i] ;
	}
	sort(arr, arr + n) ;
	for(int i = 0 ; i < n ; i++){
		auto it = upper_bound(arr + 1 + i , arr + n, k - arr[i] ) ;
		ans += arr + n - it ;
	}
	cout << ans ;
}
