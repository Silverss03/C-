#include <iostream>
using namespace std ;

int main(){
	int times ;
	cin >> times ;
	while(times--){
		int num, i;
		long long sum = 0 ; 
		cin >> num ;
		if(num % 2 == 0){
			for(i = 0; i < (num/2) ;i++){
				sum += i ;
				sum += num - i ;  
			}
			cout << sum + (num/2) << endl;
		}
		else{
			for(i = 1; i <= (num/2) ;i++){
				sum += i ;
				sum += num - i + 1 ;  
			}
			cout << sum + (num/2) + 1 << endl;
		}
	}
}
