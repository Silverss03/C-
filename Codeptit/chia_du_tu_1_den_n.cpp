#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long N, K, i, res = 0 ;
		cin >> N >> K ;
		if(N <= K){
			for(i = 1 ; i <= N ; i++) res += i ;
			cout << res << endl ;
		}
		else{
			for(i = 1 ; i <= N ; i++) res += (i % K) ;
			cout << res << endl ; 
		}
	}
}
