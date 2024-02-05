#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ; 
	cin >> tests ; 
	while(tests--){
		long long a, b, max = -10e9, min = 10e9 ;
		cin >> a >> b ;
		for(long long  i = 0 ; i < a ; i++ ){
			long long  tmp ;
			cin >> tmp ;
			if(tmp > max) max = tmp ;
		}
		for(long long  i = 0 ; i < a ; i++ ){
			long long  tmp ;
			cin >> tmp ;
			if(tmp < min) min = tmp ;
		}
		cout << (max*min) << endl ;
	}
}
