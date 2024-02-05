#include <bits/stdc++.h>
using namespace std ;

int main(){
	int num, res ; 
	cin >> num ; 
	while(num >= 5){
		res += num/5 ;
		num %= 5 ;
	}
	while(num >= 4){
		res += num/4 ;
		num %= 4 ;
	}
	while(num >= 3){
		res += num/3 ;
		num %= 3 ;
	}
	while(num >= 2){
		res += num/2 ;
		num %= 2 ;
	}
	if(num == 1) res++ ;
	cout << res ;
}
