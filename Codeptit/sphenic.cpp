#include <bits/stdc++.h>
using namespace std ;

int extract(int num){
	int c = 0, n = 0 ;
	if(num % 2 == 0){
		c++ ;
		while(num % 2 == 0){
			n++ ;
			num /= 2 ;
		}
	}
	for(int i = 3 ; i <= sqrt(num) ; i++){
		if(num % i == 0){
			c++ ;
			while(num % i == 0){
				n++ ;
				num /= i ;
			}
		}
	}
	if(num > 2){
		c++ ;
		n++ ;	
	}
	if(c == 3 && n == 3) return 1 ;
	return 0 ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		if(extract(num) == 1) cout << 1 << endl ;
		else cout << 0 << endl ;
	}
}
