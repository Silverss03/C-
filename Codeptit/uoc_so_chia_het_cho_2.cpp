#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long num, res = 0, div = 0 ;
		cin >> num ;
		while(num % 2 == 0){
			res++ ;
			num /= 2 ;	
		}
		if(res == 0) cout << 0 << endl ;
		else{
			for(int i = 1 ; i <= sqrt(num) ; i += 2){
				if(num % i == 0) div++ ;
			}
			if((int)(sqrt(num)) == sqrt(num)) div = div*2 - 1; 
			else div*= 2; 
			cout << res * div  << endl ;
		}
	}
}
