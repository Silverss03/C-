#include <iostream>
#include <cstring>
using namespace std ; 

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		string num ; 
		cin >> num  ; 
		int l = 0, c = 1 , r = num.length() - 1;
		while(l < r){
			if(num[l] != num[r]){
				c = 0;
				l = r ;
			}
			l++ ;
			r-- ;
		}
		if(c == 1) cout << "YES" << endl ;
		else cout << "NO" << endl ;
	}
}
