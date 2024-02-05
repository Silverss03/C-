#include <bits/stdc++.h>
using namespace std ;

string low(string s){
	for(int i = 0 ; i < s.length() ; i++) s[i] = tolower(s[i]) ;
	return s ;
}
int main(){
	int times ;
	cin >> times ;
	cin.ignore() ;
	map<string, int> mp ;
	while(times--){
		string s ;
		getline(cin, s) ;
		string name, b_day, token, pass ;
		vector <string> vt ;
		stringstream ss(s) ;
		while(ss >> token) vt.push_back(token) ;
		b_day = vt[vt.size() - 1] ;
		name = low(vt[vt.size() - 2] );
		for(int i = 0 ; i < vt.size() - 2 ; i++){
			name += tolower(vt[i][0]) ;
		}
		mp[name]++ ;
		if(mp[name] == 1) cout << name << "@xyz.edu.vn" << endl ;
		else cout << name << mp[name] << "@xyz.edu.vn" << endl ;
		stringstream ss2(b_day)  ;
		while(getline(ss2,pass, '/')) cout << stoi(pass) ;
		cout << endl ;
	}
}
