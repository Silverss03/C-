#include <iostream>
#include <cstring>
using namespace std ;

int main(){
	int tests; 
	cin >> tests ;
	while(tests--){
		string num ; 
		cin >> num ;
		int i, len = num.length(), c = 1 ;
		for(i = 0 ; i < len ; i++) if(num[i] != '0' && num[i] !='6' && num[i] !='8') c = 0 ;
		if(c == 1) cout << "YES" << endl ;
		else cout << "NO" << endl ;
	}
}
