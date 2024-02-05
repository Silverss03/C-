#include <bits/stdc++.h>
using namespace std ;

int main(){
	int num ;
	cin >> num ; 
	cin.ignore() ;
	while(num--){
		string s, token ; 
		getline(cin, s) ;
		stringstream ss(s) ;
		vector <string> vt ;
		while(ss >> token){
			string tmp = "" ;
			tmp += toupper(token[0]) ;
			for(int i = 1 ; i < token.length() ; i++){
				tmp += tolower(token[i]) ;
			}
			vt.push_back(tmp) ;
		}
		for(int i = 0 ; i < vt[vt.size() - 1].length() ; i++) vt[vt.size() - 1][i] = toupper(vt[vt.size() - 1][i]) ;
		for(int i = 0 ; i < vt.size() - 1 ; i++){
			if(i != vt.size() - 2) cout << vt[i] << " " ;
			else cout << vt[i] ;
		}
		cout << ", " << vt[vt.size() - 1] << endl ;
	}
	
}
