#include <iostream>
#include <cmath>
using namespace std ;

int check(int num){
	if(num < 2) return 0 ;
	int i ; 
	if(num % 2 == 0 && num != 2) return 0 ;
	for(i = 3 ; i <= sqrt(num) ; i += 2 ) if(num % i == 0) return 0 ;
	return 1 ;
}
int main(){
	int a, b, i ;
	cin >> a >> b ;
	if(a <= b){
		for(i = a ; i <= b ; i++) if(check(i) == 1) cout << i << " " ;
	}
	else{
		for(i = b ; i <= a ; i++) if(check(i) == 1) cout << i << " " ;
	}
}
