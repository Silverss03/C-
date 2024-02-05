#include <bits/stdc++.h>
using namespace std ;
#define modulo 1000000007 

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long n, x, res = 0, power = 1 ;
		cin >> n >> x ;
		long long arr[n] ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		for(int i = n - 1; i >= 0 ; i--){
			res += arr[i] * power ;
			res %= modulo ;
			power *= x ;
			power %= modulo ;
		}
		cout << res << endl ;
	}
}
