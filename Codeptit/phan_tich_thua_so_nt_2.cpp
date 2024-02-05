#include <iostream>
#include <cmath>
using namespace std ;

int main(){
	int num, count = 0, i ;
	cin >> num ;
	while(num % 2 == 0){
		count++ ; 
		num /= 2 ; 
	}
	if(count > 0){
		cout << 2 << " " << count << endl ;
		count = 0 ;
	}
	for(i = 3 ; i <= sqrt(num) ; i += 2){
		while(num % i == 0){
			count++ ;
			num /= i ;
		}
		if(count > 0){
			cout << i << " " << count << endl ;
			count = 0 ;
		}
	}
	if(num > 2) cout << num << " " << 1 << endl ;
}
