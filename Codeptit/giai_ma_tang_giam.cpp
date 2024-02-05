#include <bits/stdc++.h>
using namespace std ;


int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		string s ;
		cin >> s ;
		vector<int> v ;
		int min = 1 , pos = 0 ;
		if(s[0] == 'I'){
			v.push_back(1) ;
			v.push_back(2);
			min = 3 , pos = 1 ;  
		} 
		else{
			v.push_back(2) ;
			v.push_back(1) ;
			min = 3, pos = 0 ;  
		}
		for(int i = 1 ; i < s.length() ;i++){
			if(s[i] == 'I'){
				v.push_back(min) ;
				min++ ;
				pos = i + 1 ; 
			}
			else{
				v.push_back(v[i]) ;
				for(int j = pos ; j <= i ; j++) v[j]++ ;
				min++ ; 
			}
		}
		for(int i = 0 ; i < v.size() ; i++) cout << v[i] ;
		cout << endl ;
	}
}
