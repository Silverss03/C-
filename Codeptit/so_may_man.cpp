#include <iostream>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ; 
		if(num % 100 == 86) cout << 1 << endl ;
		else cout << 0 << endl ;
	}
}
