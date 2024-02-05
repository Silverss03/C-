#include <bits/stdc++.h> 
using namespace std ;

bool check(long long num){
	if(num < 0) num *= -1 ;
	string s = to_string(num) ;
	for(int i = 0 ; i < s.length() ; i++){
		if((i + 1) % 2 != (s[i] - '0') % 2 ) return false ;
	}
	return true ;
}
int main(){
	int tests ;
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		long long num ;
		cin >> num ;
		if(check(num)) cout << "YES\n" ;
		else cout << "NO\n" ;
	}
}
