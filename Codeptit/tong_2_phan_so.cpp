#include <bits/stdc++.h>
using namespace std ;

long long GCD(long long a, long long b){
	if(b == 0) return a ;
	return GCD(b, a%b) ;
}

struct PhanSo{
	long long nume , denum ;
};

void nhap(PhanSo &x){
	cin >> x.nume >> x.denum ;
}

void rutgon(PhanSo &x){
	long long g = GCD(x.nume, x.denum ) ;
	x.nume /= g ;
	x.denum /= g ; 
}

PhanSo tong(PhanSo &p, PhanSo &q){
	rutgon(p) ;
	rutgon(q) ;
	long long new_denum = (p.denum * q.denum ) / GCD(p.denum , q.denum ) ;
	PhanSo res ;
	res.denum = new_denum ;
	res.nume = p.nume*(new_denum/p.denum) + q.nume *(new_denum/q.denum) ;
	rutgon(res) ;
	return res ;	
}

void in(PhanSo &x){
	cout << x.nume << '/' << x.denum ;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
