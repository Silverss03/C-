#include <iostream>
#include <cstring>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ; 
	while(tests--){
		string num ;
		cin >> num ;
		int len = num.length(), i ;
		for(i = 0 ; i < len ; i++){
			if(i < len - 2 && (int)num[i] == (int)'0' && (int)num[i + 1] == (int)'8' && (int)num[i + 2] == (int)'4') i += 2 ;
			else cout << num[i] ;
		}
		cout << endl ;
	}
}
