#include <bits/stdc++.h>
using namespace std ;

long long GCD(long long a, long long b){
	if(b == 0) return a ;
	return GCD(b, a%b) ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long  a, x, y ;
		cin >> a >> x >> y ;
		long long time = GCD(x, y) ;
		for(long long i = 0 ; i < time ; i++) cout << a ;
		cout << endl ;
	}
}
