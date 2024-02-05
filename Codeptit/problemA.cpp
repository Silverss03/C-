#include <bits/stdc++.h>
using namespace std ;

long long check(long long num){
	int c = 0 ;
	while(num % 2 == 0){
		num /= 2 ;
		c++ ;
	}
	if(c >= 3) return 1 ;
	for(int i = 3 ; i <= sqrt(num) ; i+= 2){
		c = 0 ;
		while(num % i == 0){
			num /= i ;
			c++ ;
		}
		if(c >= 3) return 1 ;
	}
	return 0 ;
}
int main(){
    long long num ;
    cin >> num;
    if(check(num) == 1) cout << "YES" ;
    else cout << "NO" ;
}
