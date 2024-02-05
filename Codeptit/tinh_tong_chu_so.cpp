#include <iostream>
using namespace std ;

int extract(int& num){
	int res = 0 ;
	while(num > 0){
		res += num % 10 ;
		num /= 10 ;
	}
	return res ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ; 
		cin >> num ;
		int res = extract(num) ;
		while(res >= 10) res = extract(res) ;
		cout << res << endl ;
	}
}
