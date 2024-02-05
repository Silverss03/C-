#include <bits/stdc++.h>
using namespace std ;

int Prime(int num){
	if(num < 2) return  0 ;
	int i ; 
	if(num % 2 == 0 && num != 2) return 0 ;
	for(i = 3 ; i <= sqrt(num) ; i += 2) if(num % i == 0) return 0 ;
	return 1 ;
}

int main(){
	int tests ; 
	cin >> tests ; 
	while(tests--){
		int num ; 
		cin >> num ; 
		if(num > 2 && Prime(num - 2) == 1){
			cout << 2 << " " << num - 2 << endl ;
		}
		else{
			int i ;
			for(i = 3 ; i <= num ; i+= 2){
				if(Prime(i) == 1 && Prime(num - i) == 1 ){
					cout << i << " " << (num - i) << endl;
					break ;
				}
			}
		}
	}
}

