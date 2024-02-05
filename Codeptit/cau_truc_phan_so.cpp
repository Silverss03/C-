#include <bits/stdc++.h>
using namespace std ;

struct PhanSo{
	long long numer, denom ;
};

long long GCD(long long a, long long b){
	if(b == 0) return a ;
	return GCD(b, a%b) ;
}

void nhap(PhanSo &x){
	cin >> x.numer >> x.denom ;
}

void rutgon(PhanSo &x){
	long long g = GCD(x.numer , x.denom ) ;
	x.numer /= g ;
	x.denom /= g ; 
}

void in(PhanSo &x){
	cout << x.numer << "/" << x.denom ;
}
int main(){
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
