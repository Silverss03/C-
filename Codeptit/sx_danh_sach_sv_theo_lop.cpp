#include <bits/stdc++.h>
using namespace std ;

class SinhVien{
	private : 
		string name, grade, id, email;
	public :
		SinhVien(){
		}
		friend ostream &operator<<( ostream &output, const SinhVien &D ) { 
         	output << D.id  << " " << D.name << " " << D.grade << " " << D.email << endl ;
         	return output;            
    	}
    	friend istream &operator>>( istream  &input, SinhVien &D ) { 
         	getline(input, D.id ) ;
         	getline(input, D.name ) ;
         	getline(input, D.grade ) ;
         	getline(input, D.email ) ;
         	return input;            
        }
        bool operator < (SinhVien ex){
        	return id < ex.id ;
		}
};

int main(){
	vector<SinhVien> v ;
	SinhVien tmp ;
	while(cin >> tmp) v.push_back(tmp) ; 
	sort(v.begin() , v.end() ) ;
	for(SinhVien x : v) cout << x ; 
    return 0;
}
