#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests; 
	cin >> tests ;
	while(tests--){
		string inp ; 
		cin >> inp ;
		int i , j, len = inp.length() ; 
		for(i = 0 ; i < len ; i++){
			int c = 0 ;
			for(j = 0 ; j < len ; j++){
				if((int)inp[i] == (int)inp[j] && i != j){
					c = 1 ;
				}
			} 
			if(c == 1) continue ;
			cout << inp[i] ;
		}
		cout << endl ;
	}
}
