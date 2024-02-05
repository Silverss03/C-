#include <iostream>
#include <cmath>
using namespace std ;

long long Prime(long long num){
	if(num < 2 ) return 0 ;
	int i ;
	for(i = 2 ; i <= sqrt(num) ; i++) if(num % i == 0) return 0 ;
	return 1 ;
}
int main(){
	long long num ;
	cin >> num ; 
	if(Prime(num) == 1) cout << "YES" ;
	else cout << "NO" ;
}
