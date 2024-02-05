#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		string bin ;
		cin >> bin ;
		int len = bin.length(), i = len - 1 ;
		while(i >= 1 && bin[i] == '0') i-- ;
		if(i == 0){
			for(int i = 0 ; i < len ; i++) cout << '1' ;
			cout <<endl ;
		}
		else{
			bin[i] = '0' ;
			for(int j = i + 1 ; j < len; j++) bin[j] = '1' ;
			cout << bin << endl ;
		}

	}
}
