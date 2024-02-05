#include <bits/stdc++.h>
using namespace std;

class NhanVien{
	private :
		string name, gender, b_day, address, t_day, c_day ;
	public :
		void nhap(){
			getline(cin, name ) ;
			getline(cin, gender) ;
			getline(cin, b_day) ;
			getline(cin, address) ;
			getline(cin, t_day) ;
			getline(cin, c_day) ;
		}
		void xuat(){
			cout << "00001" << " " << name << " " << gender << " " << b_day << " " << address << " " << t_day << " " << c_day ;
		}
};
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
