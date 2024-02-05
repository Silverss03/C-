#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		bool check[num] ;
		int i, j ; 
		for(i = 2 ; i <= num ; i++)	check[i] = true ;
		for(i = 2 ; i <= sqrt(num) ; i++){
			if(check[i] == true) for(j = 2 * i ; j <= num ; j += i) check[j] = false ;
		}
		for(i = 2 ; i <= num ; i++) if(check[i] == true) cout << i << " "  ;
		cout << endl ;
	}
}
