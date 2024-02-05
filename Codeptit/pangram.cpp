#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		string inp ;
		getline(cin, inp) ; 
		int corrects, mistakes = 26, j = 0, len = inp.length() ;
		cin >> corrects ;
		char i ;
		for(i = 'a' ; i <= 'z' ; i++){
			for(j = 0 ; j < len ; j++) {
				if(i == inp[j]){
					mistakes-- ;
					break ;
				}
			}
		}
		if(mistakes <= corrects)  cout << 1 << endl ;
		else cout << 0 << endl ;
		cin.ignore() ;
	}
}
