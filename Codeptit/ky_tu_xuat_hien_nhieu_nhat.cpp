#include <bits/stdc++.h>
using namespace std;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		map<char, int> mp ;		
		string s ;
		getline(cin, s) ;
		for(char x : s){
			mp[x]++ ;
		}
		int res = 0 ;
		char c ;
		for(auto x : mp){
			if(x.second > res){
				res = x.second ;
				c = x.first ;
			}
		}
		cout << c << endl ;
	}

}
