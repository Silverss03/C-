#include <bits/stdc++.h>
using namespace std ;

int main(){
	int num ;
	cin >> num ;
	cin.ignore() ;
	map <string, pair<string,bool>> mp ;
	while(num--){
		string s, id, name, token ;
		getline(cin, s) ;
		stringstream ss(s) ;
		vector <string> vt ;
		while(ss >> token){
			vt.push_back(token) ; 
		}
		id = vt[0] ;
		for(int i = 1; i < vt.size() ; i++){
			name += vt[i] ;
			name += " " ;
		}
		name.erase(name.length() - 1) ;
		mp[id].first = name ;
		mp[id].second = true ;
	}
	int act ;
	cin >> act ;
	set <string> st ;
	while(act--){
		string x,y,z,t ;
		cin >> x >> y >> z >> t ;
		if(t == "code.ptit.edu.vn") st.insert(z) ;
		if(t != "code.ptit.edu.vn") mp[z].second = false ;
	}
	for(auto x : mp){
		cout << x.first << " " << x.second.first << " " ;
		if(mp[x.first].second == false || st.count(x.first) == 0) cout << "FAIL\n" ;
		else cout << "OK\n" ; 
	}
}
