#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		string num ;
		getline(cin,num) ;
		long long l = 0, r = 0; 
		for(long long i = 0 ; i  < num.length() ; i++){
			if(i % 2 == 0) l += (long long)((long long)num[i] - 48 ) ;
			else r += (long long)((long long)num[i] - 48 ) ;
		}
		if(abs(l - r) % 11 == 0) cout << 1 << endl ; 
		else cout << 0 << endl ;
		
	}
}
