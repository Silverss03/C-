#include <bits/stdc++.h>
using namespace std ;

class PhanSo{
	private:
		long long nume, denom ;
	public:
		PhanSo(long long a, long long b){
			nume = a ;
			denom = b ;
		}
		
		friend istream &operator >> (istream &input , PhanSo &x){
			input >> x.nume >> x.denom ;
			return input ;
		}
		
		void rutgon(){
			long long tmp = __gcd(nume, denom);
			nume /= tmp ;
			denom /= tmp ;
		}

		friend ostream &operator << (ostream &output , PhanSo &x){
			output << x.nume << "/" << x.denom ; 
			return output ;
		}
};

int main(){
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
