#include <iostream>
using namespace std;

int bank[10]= {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000} ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int money, res = 0 ;
		cin >> money ;
		while(money > 0){
			for(int i = 9 ; i >= 0 ; i--){
				while(money >= bank[i]){
					res++ ;
					money -= bank[i] ;
				}
			}
		}
		cout << res << endl ;
	}
}

