#include <bits/stdc++.h>
using namespace std ;

char count(int n, long long k){
	long long x = pow(2,n - 1) ;
	if(k == x) return 'A' + (n - 1) ;
	if(k < x) return count(n - 1,k) ;
	return count(n-1,k-x) ;
}

int main(){
	int tests, n ;
	long long k ;
	cin >> tests ;
	while(tests--){
		cin >> n >> k ;
		cout << count(n,k) << endl ;
	}
}
