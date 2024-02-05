#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		double x_a, y_a, x_b, y_b ;
		cin >> x_a >> y_a >> x_b >> y_b ;
		cout << fixed << setprecision(4) << sqrt(pow(abs(x_a-x_b),2) + pow(abs(y_a-y_b),2)) << endl ;
	}
}
