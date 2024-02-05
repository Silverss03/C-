#include <iostream>
using namespace std ;

class xaukytu{
	private:
		char *dskytu = new char[10000];
	public:
		xaukytu(){
		}
		xaukytu(char* num){
			for(int i = 0 ; num[i] != '\0' ; i++) dskytu[i] = num[i] ;
		}
		void nhapbp(){
			int num = 0 ;
			char c = ' ';
			while(c != '\n'){
				c = getchar() ;
				dskytu[num++] = c ;
			}
		}
		void xemmh(){
			for(int i = 0 ; dskytu[i] != '\0' ; i++) cout << dskytu[i] ;
		}
		operator int(){
			int i = 0, res = 0 ;
			while(dskytu[i] != '\0'){
				res = res * 10 + (int)(dskytu[i] - 48) ;
				i++ ;
			}
			return res ;
		}
		friend bool operator <= (xaukytu a, xaukytu b){
			int len1 = 0, len2 = 0 ; 
			while(a.dskytu[len1] != '\0'){
				len1++ ;
			}
			while(b.dskytu[len2] != '\0'){
				len2++ ;
			}
			if(len1 > len2){
				return 0 ;
			}
			else{
				for(int i = 0 ; i < len1 ; i++) if(a.dskytu[i] > b.dskytu[i]) return 0 ;
				return 1 ;
			}
		}
		friend xaukytu xau(int num) ;	
		xaukytu operator = (xaukytu x){
			int i = 0 ;
			while(x.dskytu[i] != '\0'){
				dskytu[i] = x.dskytu[i] ; 
				i++ ;
			}
		}
		xaukytu operator + (xaukytu a){
			xaukytu token ;
			int i = 0 ;
			while(dskytu[i] != '\0'){
				token.dskytu[i] = dskytu[i] ;
				i++ ;
			}
			int tmp = (int)(token) + (int)(a) ;
			int num = tmp, c = 0 ;
			while(tmp > 0){
				c++ ;
				tmp /= 10 ;
			}
			xaukytu res ;
			for(int i = c - 1 ; i >= 0 ; i--){
				res.dskytu[i] = (char)((num % 10) + 48) ;
				num /= 10 ;
			}
			return res ;
		}
};

	xaukytu xau(int num){
		int tmp = num, c = 0 ;
		while(tmp > 0){
			c++ ;
			tmp /= 10 ;
		}
		xaukytu res ;
		for(int i = c - 1 ; i >= 0 ; i--){
			res.dskytu[i] = (char)((num % 10) + 48) ;
			num /= 10 ;
		}
		return res ;
	}
int main(){
	xaukytu a,b("1234"), c ;
	a.nhapbp() ;
	cout << "\n a=" ;
	a.xemmh() ;
	cout << "\n int (b) =" << int(b) ;
	c = xau(1334) ;
	cout << "\n c=" ;
	c.xemmh() ;
	if(b <= c) cout << "\n b<=c" ;
	else cout << "\n b>c" ;
	a=b+c ;
	cout << "\n a=" ;
	a.xemmh() ;
}
