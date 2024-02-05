#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ; 
	cin >> tests ;
	cin.ignore() ; 
	while(tests--){
		string bina ; 
		getline(cin, bina) ;
		long long res = 0 ; 
		for(int i = 0 ; i < bina.length() ; i++){
			res = 2 * res + (long long)((long long)bina[i] - 48) ;
			if(res >= 5) res -= 5 ;
		}
		if(res % 5 == 0) cout << "Yes" << endl ;
		else cout << "No" << endl ;
	}
}

