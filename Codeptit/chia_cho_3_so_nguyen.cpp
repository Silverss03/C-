#include <bits/stdc++.h>
using namespace std ;

long long GCD(long long a, long long b){
	if(b == 0) return a ;
	return GCD(b, a%b) ;
}

long long LCM(long long a, long long b){
	return (a*b)/GCD(a,b) ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long x, y, z, n, res = -1 ;
		cin >> x >> y >> z >> n ;
		long long start = pow(10,n - 1), end = pow(10, n) - 1, tmp = LCM(x,y), mul = LCM(tmp,z), div = start/mul, c = start;
		start = div * mul ;
		for(long long i = start ; i <= end ; i += mul){
			if(i >= c){
				res = i ;
				break ;
			}
		}
		cout << res << endl ;
	}
}
