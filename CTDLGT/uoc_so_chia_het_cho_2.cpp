#include<iostream>
#include<math.h>
using namespace std ;

int div(int num){
	int res = 0;
	for(int i = 1 ; i <= sqrt(num) ; i+=2){
		if(num % i == 0) res++ ;
	}
	if(sqrt(num) == (int)(sqrt(num)))return res*2 - 1 ;
	else return res * 2 ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, times = 0 ;
		cin >> num ;
		while(num % 2 == 0){
			times++ ;
			num /= 2 ;
		}
		if(times == 0) cout << 0 << endl ;
		else{
			cout << times * div(num) << endl ;
		}
	}
}
