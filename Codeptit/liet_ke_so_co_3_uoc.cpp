#include <bits/stdc++.h>
using namespace std ;

int Prime(int num){
	if(num < 2) return 0 ; 
	if(num % 2 == 0 && num != 2) return 0 ;
	int i ; 
	for(i = 3 ; i <= sqrt(num) ; i += 2) if(num % i == 0) return 0 ;
	return 1 ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, i ;
		cin >> num ;
		for(i = 2 ; i <= sqrt(num); i++){
			if(Prime(i))cout << i*i << " " ;
		}
		cout << endl ;
	}
}
