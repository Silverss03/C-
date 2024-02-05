#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		string bin ;
		cin >> bin ;
		int len = bin.length() , pos = bin.length() - 1, c = 0 ;
		while(pos >= 0 && bin[pos] == '1'){
			pos-- ;
		}
		if(pos < 0){
			for(int i = 0 ; i < len ; i++) cout << 0 ;
		}
		else{
		    bin[pos] = '1' ; 
		    for(int j = pos + 1; j < len ; j++) bin[j] = '0' ;
		    cout << bin ;
		}
		cout << endl ;
	}
}
