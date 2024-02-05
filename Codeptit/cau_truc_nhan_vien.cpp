#include <bits/stdc++.h>
using namespace std ;

struct NhanVien{
	string name, gender, b_day, address, tax_num, c_date ;
};

void nhap(NhanVien &x){
	getline(cin, x.name ) ;
	getline(cin, x.gender ) ;
	getline(cin, x.b_day ) ;
	getline(cin, x.address ) ;
	getline(cin, x.tax_num ) ;
	getline(cin, x.c_date ) ;
}

void in(NhanVien x){
	cout << "00001" << " " << x.name << " " << x.gender << " " << x.b_day << " " << x.address << " " << x.tax_num << " " << x.c_date ;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
