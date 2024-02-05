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
        	return grade < ex.grade ;
		}
		string get_grade(){
			return grade ;
		}
};

int main(){
	int num ; 
	cin >> num ;
	cin.ignore() ;
	map<int, vector<SinhVien>> mp ;
	for(int i = 0 ; i < num ; i++){
		SinhVien tmp ;
		cin >> tmp ;
		mp[stoi(tmp.get_grade().substr(1,2))].push_back(tmp) ;
	}
	int times ;
	cin >> times ;
	while(times--){
		cin.ignore() ;
		int year ;
		cin >> year ;
		cout << "DANH SACH SINH VIEN KHOA " << year << ":" << endl ;
		for(SinhVien x : mp[year % 100]){
			cout << x  ;
		}
	}
    return 0;
}
