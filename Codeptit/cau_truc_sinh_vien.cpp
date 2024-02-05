#include <bits/stdc++.h>
using namespace std ;

struct SinhVien{
	string ten ;
	string lop ;
	string date;
	double GPA ;
};

void nhap (SinhVien &x ){
	getline(cin, x.ten ) ;
	getline(cin, x.lop ) ;
	getline(cin, x.date ) ;
	cin >> x.GPA  ;	
}

void in(SinhVien x){
	if(x.date[1] == '/' ) x.date.insert(0, "0") ;
	if(x.date[4] == '/') x.date.insert(3, "0") ;
	cout << "B20DCCN001" << " " << x.ten << " " << x.lop << " " << x.date << " " << fixed << setprecision(2) << x.GPA ;  
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
