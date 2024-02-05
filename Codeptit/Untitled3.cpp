#include <bits/stdc++.h>
using namespace std;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		set<string> count ;
		char c = ' ' ;
		int res = 0 ;
		while(c != '\n'){
			string s ;
			cin >> s ;
			//for(int i = 0 ; i < s.length() ; i++) s[i] = tolower(s[i]) ;
			count.insert(s) ;
			c = getchar() ;
		}
		for(auto x : count) res++ ;
		cout << res << endl ;
	}
}

/*
C2
string s ;
getline(cin, s) ;
set<string> count ;
stringstream ss(s) ;
string res = "" ;
while(ss >> res) count.insert(res) ;
cout << count.size() << endl ;
*/
