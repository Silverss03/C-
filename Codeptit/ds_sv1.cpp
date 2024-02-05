#include <bits/stdc++.h>
using namespace std ;

int id_n = 1 ;
class SinhVien{
	private : 
		string id, name, grade, b_day ;
		double GPA ;
	public :
		SinhVien(){
			name = "\0" ;
			grade = "\0"  ;
			b_day = "\0"  ;
			GPA = 0 ;
		}
		friend ostream &operator<<( ostream &output, SinhVien &D ) { 
         	output << D.id  << " " << D.name << " " << D.grade << " " << D.b_day << " " << fixed << setprecision(2) << D.GPA << endl;
         	return output;            
    	}
    	friend istream &operator>>( istream  &input, SinhVien &D ) { 
    		cin.ignore() ;
    		string tmp = to_string(id_n) ;
    		tmp = string(3 - tmp.size(), '0') + tmp ;
			D.id = "B20DCCN" + tmp ; 
         	getline(input, D.name ) ;
         	stringstream ss(D.name) ;
         	string token, res = "" ;
         	while(ss >> token){
         		res += toupper(token[0]) ;
         		for(int i = 1 ; i < token.length() ; i++) res += tolower(token[i]) ;
         		res += " " ;
			}
			res.erase(res.length() - 1) ;
			D.name = res ;
         	input >> D.b_day >> D.grade >> D.GPA ;
         	if(D.b_day[1] == '/') D.b_day.insert(0, "0") ;
			if(D.b_day[4] == '/') D.b_day.insert(3, "0") ; 
         	return input; 
			id_n++ ;           
        }
        friend bool cmp (SinhVien a, SinhVien b) ;
};

bool cmp (SinhVien a, SinhVien b){
    return a.GPA > b.GPA ;
}

int main(){
	int num ; 
	cin >> num ;
	SinhVien a[num];
	for(int i = 0 ; i < num ; i++) cin >> a[i] ;
	sort(a, a + num, cmp) ;
    for(int i = 0 ; i < num ; i++) cout << a[i];
    return 0;
}
