#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	map <string,int> mp ;
	while(tests--){
		string s, token, email ;
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
		email += vt[vt.size() - 1] ;
		for(auto i = 0; i < vt.size() - 1 ; i++) email += vt[i][0] ;
		if(mp[email] == 0) cout << email << "@gmail.com" << endl ;
		else cout << email << mp[email] + 1 << "@gmail.com" << endl ;
		mp[email]++ ;
	}
}
