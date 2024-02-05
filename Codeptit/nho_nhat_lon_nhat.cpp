#include <bits/stdc++.h>
using namespace std ;

string min_num(int s, int m){
	if(s > m*9 ||  s == 0) return "-1" ;
	s -= 1 ;
	string res = "" ;
	vector <int> v(m) ;
	for(int i = m - 1 ; i > 0 ; i--){
		if(s > 9){
			v[i] = 9 ; 
			s -= 9 ;
		}
		else{
			v[i] = s ;
			s = 0 ;
		}
	}
	v[0] = s + 1 ;
	for(int i = 0 ; i < m ; i++) res.push_back(v[i] + '0') ;
	return res ;
}

string max_num(int s, int m){
	if(s > m*9 ||  s == 0) return "-1" ;
	string res = "" ;
	vector <int> v(m) ;
	for(int i = 0 ; i < m ; i++){
		if(s > 9){
			v[i] = 9 ; 
			s -= 9 ;
		}
		else{
			v[i] = s ;
			s = 0 ;
		}
	}
	for(int i = 0 ; i < m ; i++) res.push_back(v[i] + '0') ;
	return res ;
}

int main(){
	int m , s ; 
	cin >> m >> s ;
	cout << min_num(s, m) << " " << max_num(s, m) ;
}
