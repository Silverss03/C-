#include <bits/stdc++.h>
using namespace std ;

class SinhVien{
	public :
		void nhap(){
			getline(cin, name) ;
			getline(cin, grade) ;
			getline(cin, b_day) ;
			cin >> gpa ;
		}
		void xuat(){
			if(b_day[1] == '/') b_day.insert(0, "0") ;
			if(b_day[4] == '/') b_day.insert(3, "0") ;
			cout << "B20DCCN001" << " " << name << " " << grade << " " << b_day << " " << fixed << setprecision(2) << gpa ; 
		}
	private :
		string name, grade, b_day  ;
		double gpa = 0 ;
};

int main(){
	SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
