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
		string get_grade(){
			return grade ;
		}
};

int main(){
	int num ; 
	cin >> num ;
	cin.ignore() ;
	map<string, vector<SinhVien>> mp ;
	for(int i = 0 ; i < num ; i++){
		SinhVien tmp ;
		cin >> tmp ;
		mp[tmp.get_grade() ].push_back(tmp) ;
	}
	int times ;
	cin >> times ;
	cin.ignore() ;
	while(times--){
		string cmp ;
		getline(cin, cmp) ;
		cout << "DANH SACH SINH VIEN LOP " << cmp << ":" << endl ;
		for(SinhVien x : mp[cmp]){
			cout << x ;
		}
	}
    return 0;
}
