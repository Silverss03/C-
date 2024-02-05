#include <bits/stdc++.h>
using namespace std ;

class student{
	string id, name = "", grade, mail ;
	int year = 0 ;
	public :
		void input(){
			getline(cin,id) ; 
			for(int i = 0 ; i < 4 ; i++) year = year * 10 + (int)(id[i] - 48) ;
			string s, token ;
			getline(cin, s) ;
			stringstream ss(s) ;
			while(ss >> token){
				name += toupper(token[0]) ;
				for(int i = 1 ; i < token.length() ; i++) name += tolower(token[i]) ;
				name += " " ;
			}
			name.erase(name.length() - 1) ;
			getline(cin, grade) ;
			getline(cin, mail)	;		
		}
		friend ostream &operator << (ostream &out, student d) {
			cout << d.id << " " << d.name << " " << d.grade << " " << d.mail << endl ;
			return out ;
		}
		int get_y(){
			return year ;
		}
};

int main(){
	int num, y ;
	cin >> num ;
	cin.ignore() ;
	student a[num] ;
	map <int, vector<student>> mp ;
	for(int i = 0 ; i < num ; i++){
		a[i].input() ;
		mp[a[i].get_y() ].push_back(a[i]) ; 
	}
	int times ;
	cin >> times ;
	while(times--){
		cin >> y ;
		cout << "DANH SACH SINH VIEN KHOA " << y << " :" << endl ;
		for(student x : mp[y]){
			cout << x ;
		}
	}
}
