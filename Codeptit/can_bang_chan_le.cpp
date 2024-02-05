#include <iostream>
#include <cmath>
using namespace std ; 

int extract(int num){
	int c_odd = 0 , c_even = 0 ;
	while(num > 0){
		int tmp = num % 10 ;
		if(tmp % 2 == 0) c_even++ ;
		else c_odd++ ;
		num /= 10 ;
	} 
	if(c_even == c_odd) return 1 ;
	return 0 ;
}

int main(){
	int num, i , l_limit = 1  ;
	cin >> num ;
	int start = pow(10,num - 1), end = pow(10, num) ;
	for(i = start ; i < end ;i++){
		if(extract(i) == 1 && l_limit % 10 != 0) {
			cout << i << " " ;
			l_limit++ ;
		}
		else if(extract(i) == 1 && l_limit % 10 == 0){
			cout << i << endl ;
			l_limit++ ;
		}
	}
}
