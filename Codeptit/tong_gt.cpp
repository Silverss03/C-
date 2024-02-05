#include <iostream>
using namespace std ;

long long factorial(long long num){
	long long res = 1, i; 
	for(i = 1 ; i <= num ; i++) res *= i ;
	return res ; 
}
int main(){
	long long num, res = 1, i ;
	cin >> num ;
	for(i = 2 ; i <= num ;i++) res += factorial(i) ;
	cout << res ;
}
