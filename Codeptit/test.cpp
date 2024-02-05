#include <bits/stdc++.h>
using namespace std ;

class thoigian{
	private :
		int thang ;
		int nam ;
	public :
		thoigian(){
		} 
		thoigian(int a, int b){
			thang = a ;
			nam = b ;
		}
		void nhapbp(){
			cin >> thang ;
			cin >> nam ; 
		}
		void xemmh(){
			cout << endl << " " << thang << " " << nam  ;
		}
		operator char*() ;
		friend bool operator < (thoigian a, thoigian b){
			if(a.nam < b.nam ) return 1 ;
			else if(a.nam == b.nam && a.thang < b.thang) return 1 ;
			return 0 ;
		}
		friend int operator - (thoigian a, thoigian b){
			int res ;
			res = abs(a.thang - b.thang ) ;
			return res ;
		}
		thoigian operator + (int num){
			thoigian res ;
			res.thang = thang + num ;
			res.nam = nam ;
			if(res.thang > 12){
				res.thang -= 12;
				res.nam += 1 ;
			}
			return res; 
		}
		thoigian operator - (int num){
			thoigian res ;
			res.thang = thang - num ;
			res.nam = nam ;
			if(res.thang < 0){
				res.thang += 12 ;
				res.nam -= 1 ;
			}
			else if(res.thang == 0){
				res.thang = 12 ;
				res.nam -= 1 ;
			}
			return res; 
		}
};

thoigian::operator char*(){
	string token = " thang "  ;
	string day = "", year = "" ;
	for(int i = 0 ; i < 2 ; i++ ){
		char add = (char)((thang%10) + 48) ;
		day = add + day ;
		thang /= 10 ;
	}
	for(int i = 0 ; i < 4 ; i++){
		char add = (char)((thang%10) + 48) ;
		year = add + year ;
		//year /= 10 ;
	}
	token = token + day + " nam " + year;
	char* res = new char[19];
	for(int i = 0 ; i < 19 ; i++) res[i] = token[i] ;
	return res ;
}

int main(){
	thoigian a, b(10,2021), c(8,2021) ;
	a.nhapbp() ;
	a.xemmh() ;
	b.xemmh() ;
	//c = thoigian("thang 11 nam 2021") ;
	//c.xemmh() ;
	cout << "\n" << (char*) (c) ;
	if(a < b) cout << "\n a < b" ;
	else cout << "\n a >= b" ;
	int sothang = a - b;
	cout << "\n a - b =" << sothang ;
	c = a + 12 ;
	c.xemmh() ;
	c = a - 12 ;
	c.xemmh() ;
}
