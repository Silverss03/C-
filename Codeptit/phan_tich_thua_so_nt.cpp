#include <iostream>
#include <cmath>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		int count = 0, i ;
		while(num % 2 == 0){
			num /= 2 ;
			count++ ;
		}
		if(count > 0){
			cout << 2 << " " << count << " " ;
			count = 0 ;
		}
		for(i = 3 ; i <= sqrt(num) ; i += 2){
			while(num % i == 0){
				count++ ;
				num /= i ;
			}
			if(count > 0){
				cout << i << " " << count << " " ;
				count = 0 ;
			}
		}
		if(num > 2) cout << num << " " << 1 << " ";
		cout << endl ;
	}
}
