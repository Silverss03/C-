#include <bits/stdc++.h>
using namespace std ;

struct Point{
	double x, y ;
};

void input(Point &X){
	cin >> X.x >> X.y ;
}

double distance(Point A, Point B){
	double x = abs(A.x - B.x ) ;
	double y = abs(A.y - B.y ) ;
	double res = sqrt(x*x + y*y) ;
	return res ;
}

int main(){
    Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
