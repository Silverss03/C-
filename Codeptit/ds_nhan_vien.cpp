#include <bits/stdc++.h>
using namespace std ;

int c = 0 ;

struct NhanVien{
	string name, gender, b_day, address, tax_num, c_date ;
};

void nhap(NhanVien &ds){
	if(c == 0) cin.ignore() ;
	getline(cin, ds.name) ;
	getline(cin, ds.gender) ;
	getline(cin, ds.b_day ) ;
	getline(cin, ds.address ) ;
	getline(cin, ds.tax_num ) ;
	getline(cin, ds.c_date ) ;
	c = 1 ;
}

void inds(NhanVien ds[], int N){
	for(int i = 0; i < N ; i++){
		int tmp = 0, c = i + 1;
		while(c > 0){
			tmp++ ;
			c /= 10 ;
		}
		char code = '0' ;
		cout << string(5-tmp,code) << i + 1<< " " << ds[i].name << " " << ds[i].gender << " " << ds[i].b_day << " " << ds[i].address << " " << ds[i].tax_num << " " << ds[i].c_date << endl ;
	} 	
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
