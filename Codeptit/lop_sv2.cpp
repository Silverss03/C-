#include <bits/stdc++.h>
using namespace std ;

class SinhVien{
	private : 
		string name, grade, b_day ;
		double GPA ;
	public :
		SinhVien(){
			name = "\0" ;
			grade = "\0"  ;
			b_day = "\0"  ;
			GPA = 0 ;
		}
		friend ostream &operator<<( ostream &output, const SinhVien &D ) { 
         	output << "B20DCCN001" << " " << D.name << " " << D.grade << " " << D.b_day << " " << fixed << setprecision(2) << D.GPA ;
         	return output;            
    	}
    	friend istream &operator>>( istream  &input, SinhVien &D ) { 
         	getline(input, D.name ) ;
         	input >> D.grade >> D.b_day >> D.GPA ;
         	if(D.b_day[1] == '/') D.b_day.insert(0, "0") ;
			if(D.b_day[4] == '/') D.b_day.insert(3, "0") ; 
         	return input;            
        }
};

int main(){
	SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
