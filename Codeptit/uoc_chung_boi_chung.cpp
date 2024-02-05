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
		long long a, b ;
		cin >> a >> b ;
		cout << (a*b)/GCD(a,b) << " " << GCD(a,b) << endl ;
	}
}
