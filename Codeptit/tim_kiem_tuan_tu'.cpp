#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, res = - 1, b = 0, x ;
		cin >> n >> x; 
		for(int i = 1 ; i <= n ; i++){
			int tmp ;
			cin >> tmp ;
			if(tmp == x && b == 0){
				res = i ;
				b = 1 ;
			}
		}
		cout << res << endl ; 
	}
}
