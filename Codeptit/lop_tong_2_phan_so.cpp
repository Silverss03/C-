#include <bits/stdc++.h>
using namespace std ;

class PhanSo{
	private:
		long long nume, denom ;
	public:
		PhanSo(long long a = 1, long long b = 1){
			nume = a ;
			denom = b ;
		}
		
		friend istream &operator >> (istream &input , PhanSo &x){
			input >> x.nume >> x.denom ;			
			long long tmp = __gcd(x.nume , x.denom );
			x.nume  /= tmp ;
			x.denom  /= tmp ;
			return input ;
		}

		friend PhanSo operator +(PhanSo x,  PhanSo y){
			PhanSo res ;
			long long tmp = __gcd(x.denom, y.denom) ;
			res.nume = x.nume * y.denom  + y.nume * x.denom ;
			res.denom = (x.denom * y.denom)/tmp  ;
			tmp = __gcd(res.nume, res.denom) ;
			res.nume /= tmp ;
			res.denom /= tmp ;
			return res ;
		}
		
		friend ostream &operator << (ostream &output, PhanSo res){
			output << res.nume << "/" << res.denom ;
			return output  ;
		}
};

int main(){
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q << endl ;
	PhanSo x = p + q ;
	cout << x;
	return 0;
}
