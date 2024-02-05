#include <bits/stdc++.h>
using namespace std;

int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		string s ;
		getline(cin, s) ;
		map<char, int> mp ;
		int res = 1 ;
		for(int i = 0 ; i < s.length() ; i++){
			s[i] = tolower(s[i]) ;
			mp[s[i]]++ ;
		}
		for(char i = 'a' ; i <= 'z' ; i++){
			if(mp[i] == 0) res = 0 ;
		}
		if(res == 0) cout << "NO\n" ;
		else cout << "YES\n" ;
	}
}

/*
C2:
string s ;
getline(cin, s) ;
int a[26] = {0}, cnt = 0 ;
for(char x : s) a[tolower(x) - 'a'] = 1 ;
for(int i = 0 ; i < 26 ; i++) cnt += a[i] ;
if(cnt == 26) cout << "YES\n" ;
else cout << "NO\n" ;	
