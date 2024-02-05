#include <bits/stdc++.h>
using namespace std ;

struct PhanSo{
	long long tu, mau ;
};

long long GCD(long long a, long long b){
	if(b == 0) return a ;
	return GCD(b, a%b) ;
}

void rutgon(PhanSo &x){
	long long g = GCD(x.tu , x.mau ) ;
	x.tu /= g ;
	x.mau /= g ; 
}

void process(PhanSo p, PhanSo q){
	rutgon(p) ;
	rutgon(q) ;
	long long new_mau = (p.mau * q.mau ) / GCD(p.mau , q.mau ) ;
	PhanSo res ;
	res.mau = new_mau * new_mau ;
	res.tu = (p.tu*(new_mau/p.mau) + q.tu *(new_mau/q.mau)) * (p.tu*(new_mau/p.mau) + q.tu *(new_mau/q.mau)) ;
	rutgon(res) ;
	cout << res.tu << '/' << res.mau << " " ;
	res.tu = res.tu * p.tu * q.tu ;
	res.mau = res.mau * p.mau * q.mau ;
	rutgon(res) ;
	cout << res.tu << '/' << res.mau << endl ;
}
int main(){
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
