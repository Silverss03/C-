#include <bits/stdc++.h>
using namespace std ;

long long primes(long long num){
	if(num < 2) return 0 ;
	if(num % 2 == 0 && num != 2) return 0 ;
	for(long long i = 3 ; i <= sqrt(num) ; i+= 2){
		if(num % i == 0) return 0 ;
	}
	return 1 ;
}

long long increase(long long num){
	int last = num % 10 ;
	num /= 10 ;
	while(num > 0){
		int tmp = num % 10 ;
		if(last <= tmp) return 0 ;
		last = tmp ;
		num /= 10 ;
	}
	return 1 ;
}

long long decrease(long long num){
	int last = num % 10 ;
	num /= 10 ;
	while(num > 0){
		int tmp = num % 10 ;
		if(last >= tmp) return 0 ;
		last = tmp ;
		num /= 10 ;
	}
	return 1 ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, res = 0 ;
		cin >> num ;
		long long start = pow(10, num - 1), end = pow(10, num) - 1 ;
		for(long long i = start; i <= end ; i++){
			if( (increase(i) == 1 || decrease(i) == 1) && primes(i) == 1 ) res++ ;
		}
		cout << res << endl ;
	}
}
