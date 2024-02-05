#include <iostream>
#include <iomanip>
using namespace std ;

int main(){
	int num;
	double res = 0 ; 
	cin >> num ;
	cout << fixed << setprecision(4) ;
	if(num % 2 == 0){
		double i ; 
		for(i = 1; i <= (num/2) ; i++){
			res += (double)(1/i) ;
			res += (double)(1/(double)(num - i + 1)) ;
		}
		cout << res ;
	}
	else{
		double i ; 
		for(i = 1; i <= (num/2) ; i++){
			res += (double)(1/i) ;
			res += (double)(1/(double)(num - i + 1)) ;
		}
		cout << res + (double)(1/(double)((num/2)+1));
	}
}
