#include <bits/stdc++.h>
using namespace std ;

int c_prime(int num){
	if(num < 2) return 0 ;
	if(num % 2 == 0 && num != 2) return 0 ;
	for(int i = 3 ; i <= sqrt(num) ; i += 2) if(num % i == 0) return 0 ;
	return 1 ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int l, r, res = 0 ; 
		cin >> l >> r ;
		for(int i = l ; i <= r ;i++){
			if(c_prime(i) == 1) res++ ;
		}
		cout << res << endl ;
	}
}
