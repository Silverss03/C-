#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		set <int> s ;
		int num ; 
		cin >> num ;
		for(int i = 0 ; i < num ; i++){
			int tmp ; 
			cin  >> tmp ;
			s.insert(tmp) ;
		}
		cout << s.size() << endl;
	}
}
