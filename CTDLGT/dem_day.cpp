#include <bits/stdc++.h>
using namespace std ;

int modulo = 123456789 ;

long long power(long long n, long long k){
	if(k == 0) return 1; 
	long long x = power(n, k/2) ;
	if(k % 2 == 0) return x*x%modulo ;
	return n* (x * x % modulo) % modulo ;
} 

int main(){
	int tests ;
	long long n ;
	cin >> tests ;
	while(tests--){
		cin >> n ; 
		cout << power(2, n - 1) << endl ;
	}
}
