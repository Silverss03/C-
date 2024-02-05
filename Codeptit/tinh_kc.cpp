#include <bits/stdc++.h>
using namespace std; 

int main(){
	int x1, y1, x2, y2 ;
	cin >> x1 >> y1 >> x2 >> y2 ;
	double x = abs(x1 - x2), y = abs(y1 - y2) ;
	double res = sqrt(x*x+y*y) ;
	cout << fixed << setprecision(2) << res ;
}
