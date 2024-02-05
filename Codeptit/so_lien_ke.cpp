#include <iostream>
#include <cmath>
using namespace std ;

int main(){
	int tests ; 
	cin >> tests ;
	while(tests--){
		string num ;
		cin >> num ;
		int len = num.length(), i, c = 1 ;
		for(i = 0 ; i < len - 1 ; i++){
			if(abs((int)num[i] - (int)num[i + 1]) != 1){
				c = 0 ;
				break;
			}
		}
		if(c == 1) cout << "YES" << endl ;
		else cout << "NO" << endl ;
	}
}
