#include <bits/stdc++.h>
using namespace std; 

int main(){
	string s1,s2, token ;
	set<string> se1, se2 ;
	getline(cin, s1);
	getline(cin, s2) ;
	for(int i = 0 ; i < s1.length() ; i++) s1[i] = tolower(s1[i]) ;
	for(int i = 0 ; i < s2.length() ; i++) s2[i] = tolower(s2[i]) ;
	stringstream ss(s1), ss2(s2) ;
	while(ss >> token){
		se1.insert(token) ;
	}
	while(ss2 >> token){
		se2.insert(token) ;
	}
	for(auto x : se1){
		if(se2.count(x) == 0) cout << x << " " ;
	}
}
