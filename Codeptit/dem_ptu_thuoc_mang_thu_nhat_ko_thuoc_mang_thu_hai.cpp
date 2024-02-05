#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		set <int> s2;
		int num1, num2, res = 0 ; 
		cin >> num1 >> num2 ;
		int s1[num1] ;
		for(int i = 0 ; i < num1 ; i++) cin >> s1[i] ;
		for(int i = 0 ; i < num2 ; i ++){
			int tmp ;
			cin >> tmp ;
			s2.insert(tmp) ;
		}
		for(auto x : s1){
			if(s2.find(x) == s2.end()){
				cout << x << " " ;
				res = 1 ; 
			}
		}
		if(res == 0) cout << "NOT FOUND\n" ;
		else cout << endl ;
	}
}
