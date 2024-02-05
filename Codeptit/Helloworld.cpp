#include <iostream>
using namespace std ;

int main(){
	int times ;
	cin >> times ;
	while(times--){
		int num, i, sum = 0 ; 
		cin >> num ;
		for(i = 1; i <= num ;i++) sum += i ;
		cout << sum ;
	}
}
