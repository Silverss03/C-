#include <bits/stdc++.h>
using namespace std; 

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, res = 0, c, i ,b = 0;
		cin >> num >> c;
		while(num % 2 == 0){
			num /= 2 ;
			res++ ;
			if(res == c && b == 0){
				cout << 2 << endl ;
				b = 1 ;
			}
		}
		for(i = 3 ; i <= sqrt(num) ; i += 2){
			while(num % i == 0){
				num /= i ;
				res++ ; 
				if(res == c && b == 0){
					cout << i << endl ;
					b = 1 ;
				}
			}
		}
		if(num > 2) res++ ;
		if(res == c && b == 0) cout << num << endl ;
		if(res < c) cout << -1 << endl ;
	}
}
