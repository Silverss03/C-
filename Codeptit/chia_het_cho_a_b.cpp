#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int m, n, a, b, res = 0;
		cin >> m >> n >> a >>  b ;
		if(m <= n){
			for(int i = m ; i <= n ; i++){
				if(i % a == 0 || i % b == 0) res++ ;
			}
			cout << res << endl ;
		}
		else{
			for(int i = n ; i <= m ; i++){
				if(i % a == 0 || i % b == 0) res++ ;
			}
			cout << res << endl ;
		}
	}
}
