#include <bits/stdc++.h>
using namespace std ; 

int modulo = 1e9 + 7 ;

long long power(int n, int k){
	if(k == 0) return 1 ;
	long long x = power(n, k/2) ;
	if(k % 2 == 0) return x * x % modulo ;
	return n * (x * x % modulo) % modulo ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k;
		cin >> n >> k; 
		long long res = power(n, k) ;
		cout << res << endl ;
	}
}
