#include <bits/stdc++.h>
using namespace std ;

int c_prime(int num){
	if(num < 2) return 0 ;
	if(num % 2 == 0 && num != 2 ) return 0 ;
	for(int i = 3 ; i <= sqrt(num) ; i+= 2) if(num % i == 0) return 0 ;
	return 1 ;
}
int div(int num){
	if(num % 2 == 0) return 2 ;
	for(int i = 3 ; i <= sqrt(num) ; i += 2){
		if(num % i == 0 && c_prime(i) == 1) return i ;
	}
	return num ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		cout << 1 << " " ;
		for(int i = 2 ; i <= num ; i++){
			cout << div(i) << " " ;
		}
		cout << endl ;
	}
}
