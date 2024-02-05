#include<bits/stdc++.h>
using namespace std ;

class hang{
	protected :
		string tenhang ;
		int gia = 0, mahang = 0;
	public :
		void nhapbp(){
			string input, res = "", token ;
			getline(cin, input) ;	
			mahang = (int)(input[0] - 48)  ;
			input.erase(input.begin()) ;
			stringstream ss(input) ;
			while(ss >> token){
				if(token[0] >= '0' && token[0] <= '9'){
					for(int j = 0 ; j < token.length() ; j++){
						if(token[j] >= '0' && token[j] <= '9') gia = gia*10 + (int)(token[j] - 48) ;
					}
				}
				else{
					res += token ;
					res += " " ;
				}
			}
			tenhang = res ;
		}
		void xemmh(){
			cout << mahang << "     " << tenhang << "     " << gia ; 
		}
		friend class banggia ;
};

class banggia{
	hang dshang[100] ;
	int ts = 0;
	public:
		void nhapbp(){
			cout << "TS:" ;
			cin >> ts ;
			cin.ignore() ;
			cout << "Ma     " << "Ten hang     " << "Gia     " << endl ;
			for(int i = 0 ; i < ts ; i++){
				dshang[i].nhapbp() ;
			}
		}
		void xemmh(){
			cout << "Ma     " << "Ten hang     " << "Gia     " << endl ;
			for(int i = 0 ; i < ts ; i++){
				dshang[i].xemmh() ;
				cout << endl ;
			}
		}
		int timgia(int ma){
			return dshang[ma - 1].gia ;
		}
		string timhang(int ma){
			return dshang[ma - 1].tenhang ;
		}
};

class hangban : public hang{
	private :
		int soluong = 0 ;
		int thanhtien  = 0;
	public :
		hangban(){
		}
		void nhapbp(){
			cin >> soluong ;
		}
		void xemmh(){
			hang :: xemmh() ;
			cout << "     "<<  soluong << "     " << thanhtien << endl ;
		}
	friend class hoadon ;
};

class hoadon{
	int sohoadon = 0, ts = 0, tongtien = 0;
	string khachhang = ""; 
	hangban dshangban[10] ;
	public:
		hoadon(){
		}
		void nhapbp(banggia a){
			cout << endl << "So HD:" ;
			cin >> sohoadon ;
			cin.ignore() ;
			cout << "Khach hang: " ;
			getline(cin, khachhang) ;
			cout << "TS: " ;
			cin >> ts ;
			cout << "Ma     " << "SL     " << endl;
			for(int i = 0 ; i < ts ; i++){
				cin >> dshangban[i].mahang ;
				dshangban[i].nhapbp();
				dshangban[i].tenhang = a.timhang(dshangban[i].mahang )   ; 
				dshangban[i].gia = a.timgia(dshangban[i].mahang )  ; 
				dshangban[i].thanhtien = dshangban[i].gia * dshangban[i].soluong ;
				tongtien += dshangban[i].thanhtien ;
			}
		}
		void xemmh(){
			cout << "So HD: " << sohoadon << " " << "Khach hang: " << khachhang << endl ; 
			cout << "Ma     " << "Ten hang     " << "Gia     " << "SL     " << "Thanh tien     " << endl ;
			for(int i = 0 ; i < ts ; i++){
				dshangban[i].xemmh() ;
			}
			cout << "      Tong tien:          " << tongtien << endl ;
		}
		void ghitep(){
			ofstream outfile;
			outfile.open("res.txt", ios::out ) ;
			outfile << "So HD:" << sohoadon << " Khach hang: " << khachhang << endl ; 
			outfile << "Ma     " << "Ten hang     " << "Gia     " << "SL     " << "Thanh tien     " << endl ;
			for(int i = 0 ; i < ts ; i++){
				outfile << dshangban[i].mahang << "     " << dshangban[i].tenhang << "     " << dshangban[i].gia << "     "<<  dshangban[i].soluong << "     " << dshangban[i].thanhtien << endl ; 
			}
			outfile << "      Tong tien:          " << tongtien << endl ; 
			outfile.close(); 
		}
		void doctep(){
			ifstream infile ; 
			infile.open("input.txt", ios::in) ;
			string data ;
			getline(infile, data) ;
			for(int i = 0 ; i < data.length() ; i++){
				if(data[i] >= '0' && data[i] <= '9') ts = ts*10 + (int)(data[i] -48) ;
			}
			getline(infile, data) ;			
			for(int i = 0 ; i < ts ; i++){
				infile >> dshangban[i].mahang ;
				getline(infile, data) ;
				stringstream ss(data) ;
				string res = "", token ;
				while(ss >> token ){
					if(token[0] >= '0' && token[0] <= '9'){
						for(int j = 0 ; j < token.length() ; j++){
							if(token[j] >= '0' && token[j] <= '9'){
								dshangban[i].gia  = dshangban[i].gia*10 + (int)(token[j] - 48) ;
							}
						}
					}
					else{
						res += token ;
						res += " " ;
					}
				}
				res.erase(res.length() - 1) ;			
				dshangban[i].tenhang = res ;
			}
			getline(infile, data) ;	
			for(int i = 0 ; i < data.length() ; i++){
				if(data[i] >= '0' && data[i] <= '9') sohoadon = sohoadon*10 + (int)(data[i] -48) ;
			}		
			getline(infile, data) ;	
			for(int i = 11 ; i < data.length() ; i++){
				khachhang += data[i] ;
			}
			getline(infile, data) ;
			ts = 0 ;	
			for(int i = 0 ; i < data.length() ; i++){
				if(data[i] >= '0' && data[i] <= '9') ts = ts*10 + (int)(data[i] -48) ;
			}
			getline(infile, data) ;
			for(int i = 0 ; i < ts ; i++){
				infile >> dshangban[i].mahang >> dshangban[i].soluong ;
				dshangban[i].thanhtien = dshangban[i].gia * dshangban[i].soluong ;
				tongtien += dshangban[i].thanhtien ;
			}
			infile.close() ;
		}
};

int main(){
	banggia a ;
	a.nhapbp() ;
	a.xemmh() ;
	hoadon b ;
	b.nhapbp(a) ; 
	b.xemmh() ;
	b.ghitep() ;
	hoadon c ;
	c.doctep() ;
	c.xemmh() ;
}
