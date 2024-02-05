#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		string bin ;
		cin >> bin ;
		int len = bin.length() , pos = bin.length() - 1, c = 0 ;
		while(pos > 0){
			if(bin[pos] == '0'){
				c = 1 ;
				bin[pos] = '1' ;
				for(int i = pos + 1 ; i < len ; i++) bin[i] = '0' ;
				break ;
			}
			pos-- ;
		}
		if(c == 0){
			for(int i = 0 ; i < len ; i++) cout << 0 ;
		}
		else cout << bin ;
		cout << endl ;
	}
}
