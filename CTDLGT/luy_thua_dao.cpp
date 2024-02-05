#include <bits/stdc++.h>
using namespace std ;

long long modulo = 1e9 + 7 ;

long long power(long long n, long long k){
	if(k == 0) return 1; 
	long long x = power(n, k/2) ;
	if(k % 2 == 0) return x*x%modulo ;
	return n* (x * x % modulo) % modulo ;
} 

long long revert(long long n){
	long long res = 0 ;
	while(n > 0){
		res = res * 10 + n%10 ;
		n/=10 ;
	}
	return res ;
}
int main(){
	int tests ;
	long long n, k ;
	cin >> tests ;
	while(tests--){
		cin >> n ; 
		k = revert(n) ;
		if(n == 0) cout << 1 << endl ;
		else cout << power(n, k) << endl ;
	}
}

