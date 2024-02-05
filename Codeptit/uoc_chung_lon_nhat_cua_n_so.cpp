#include <iostream>
using namespace std ;

long long GCD(long long a, long long b){
	if(b == 0) return a ;
	return GCD(b, a%b) ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long num, i ;
		cin >> num ;
		long long tmp = 1 ;
		for(i = 2 ; i <= num ; i++){
			tmp = (i*tmp)/(GCD(tmp,i)) ;
		}
		cout << tmp << endl ;
	}
}
