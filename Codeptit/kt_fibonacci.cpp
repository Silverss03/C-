#include <bits/stdc++.h>
using namespace std ;

long long c_fib(long long num){
	if(num == 1 || num == 2 || num == 0) return 1 ;
	long long f1 = 1 , f2 = 2, fn = 3;
	while(fn < num){
		f1 = f2 ;
		f2 = fn ; 
		fn = f1 + f2 ;
	}
	if(fn == num) return 1 ;
	return 0;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long num ;
		cin >> num ;
		if(c_fib(num) == 1) cout << "YES" << endl ;
		else cout << "NO" << endl ;
	}
}
