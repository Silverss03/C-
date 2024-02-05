#include <bits/stdc++.h>
using namespace std ;

struct ThiSinh{
	string name ;
	string b_day ;
	double g_1, g_2, g_3 ;
};

void nhap(ThiSinh &X){
	getline(cin, X.name ) ;
	getline(cin, X.b_day ) ;
	cin >> X.g_1 >> X.g_2 >> X.g_3 ;	
}

void in(ThiSinh X){
	double score = X.g_1 + X.g_2 + X.g_3 ;
	cout << X.name << " " << X.b_day << " " << fixed << setprecision(1) << score ;	
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
