#include <bits/stdc++.h>
using namespace std ;

long long power(long long a, long long b, long long p){
	long long res = 1 ;
	a %= p ;
	while(b > 0){
		if(b & 1) res = (res*a) % p ;
		b /= 2 ;
		a = (a * a) % p ;
	}
	return res ;
}

long long mod(long long n, long long p){
	return power(n, p - 2, p) ;
}

long long test(long long n, long long r, long long p){
	if(n < r) return 0 ;
	if(r == 0) return 1 ;
	long long arr[10000] ;
	arr[0] = 1 ;
	for(int i = 1 ; i <= n ; i++) arr[i] = (arr[i - 1] * i) % p ;
	return (arr[n] * mod(arr[r],p) % p * mod(arr[n - r], p) % p) % p ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, r ,p =10e9 + 7;
		cin >> n >> r ;
		cout << test(n,r,p) << endl ;
	}
}
