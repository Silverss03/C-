#include <bits/stdc++.h>
using namespace std ;

long long fib(long long num){
	if(num <= 2) return 1 ;
	long long f1 = 1 , f2 = 1, fn, count = 2 ;
	while(count < num){
		fn = f1 + f2 ;
		f1 = f2 ;
		f2 = fn ;
		count++ ;
	}
	return fn ;
	
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long num ;
		cin >> num ;
		cout << fib(num) << endl;
	}
}
