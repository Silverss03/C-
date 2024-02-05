#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int a, m, i, c = 0 ;
		cin >> a >> m ;
		for(i = 0 ; i < m ; i++){
			if((a*i) % m == 1){
				cout << i << endl ;
				c = 1 ;
				break ;
			}
		}
		if(c == 0) cout << -1 << endl ;
	}
}
