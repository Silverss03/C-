#include <bits/stdc++.h>
using namespace std ;

int main(){
	string proto, del ; 
	getline(cin, proto) ;
	getline(cin, del) ;
	stringstream ss(proto) ;
	string token ;
	while(ss >> token){
		if(token != del) cout << token << " " ;
	}
}
