#include <bits/stdc++.h>
using namespace std ;

long long check(long long num){
	if(num < 2) return 0 ;
	if(num != 2 && num % 2 == 0) return 0;
	for(long long i = 3 ; i <= sqrt(num) ; i+= 2){
		if(num % i == 0) return 0 ;
	}
	return 1;
}
int main(){
	int tests ;
	cin >> tests;
	while(tests--){
		long long l, r, res = 0;
		cin >> l >> r;
		for(long long i = sqrt(l) ; i <= sqrt(r) ; i++) if(check(i) == 1) res++ ;
		cout << res << endl ;
	}
}
