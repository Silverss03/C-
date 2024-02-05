#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		string s, token ;
		getline(cin, s) ;
		stringstream ss(s);
		vector <string> vt ;
		while(ss >> token){
			string res = "";
			for(int i = 0 ; i < token.length() ; i++){
				res += tolower(token[i]) ; 
			}
			vt.push_back(res) ;
		}
		cout << vt[vt.size() - 1] ;
		for(auto i = 0; i < vt.size() - 1 ; i++) cout << vt[i][0] ;
		cout << "@gmail.com" << endl ;
	}
}
