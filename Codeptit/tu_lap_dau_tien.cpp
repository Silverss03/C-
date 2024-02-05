#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		string s, token ;
		getline(cin, s) ;
		map<string,int> mp ;
		stringstream ss(s) ;
		while(ss >> token){
			mp[token]++ ;
		}
		for(auto x : mp){
			if(x.second > 1){
			 	cout << x.first << endl ;
			 	break ;
			}
		}
	}
}
