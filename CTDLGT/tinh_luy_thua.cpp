#include <bits/stdc++.h>
using namespace std ;

int modulo = 1e9 + 7 ;

long long power(int n, int k){
	if(k == 0) return 1; 
	long long x = power(n, k/2) ;
	if(k % 2 == 0) return x*x%modulo ;
	return n* (x * x % modulo) % modulo ;
} 

int main(){
	int tests, n, k ;
	cin >> tests ;
	while(tests--){
		while(1){
			cin >> n >> k ; 
			if(n == 0 && k == 0) break;
			cout << power(n, k) << endl ;
		}
	}
}
