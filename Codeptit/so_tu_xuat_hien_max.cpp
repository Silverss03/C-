#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		string s,res,token ;
		getline(cin,s) ;
		stringstream ss(s) ;
		int max = -1 ;
		map<string, int> mp ;
		while(ss >> token){
			mp[token]++ ;
			if(mp[token] > max){
				res = token ;
				max = mp[token] ;
			}
		}
		cout << res << endl ;
	}
}
