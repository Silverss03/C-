#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		string inp, res = "" ;
		getline(cin, inp) ;
		stringstream copy(inp) ;
		string token[1000] ;
		int count = 0 ;
		while(copy >> token[count++]){
		}
		for(int i = count - 1 ; i >= 0 ; i--){
			res += token[i] ;	
			res += " " ;
		} 
		res.erase(res.begin()) ;
		cout << res << endl ;
	}
}
