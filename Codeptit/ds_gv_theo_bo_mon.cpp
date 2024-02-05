#include <bits/stdc++.h>
using namespace std ;

int id_n = 1 ;
class teacher{
	string name, subject, short_s, id ;
	public :
		friend istream &operator >> (istream &input, teacher &s){
			getline(input, s.name ) ;
			getline(input, s.subject ) ;
			stringstream ss(s.subject ) ;
			string token ;
			while(ss>> token){
				s.short_s += toupper(token[0]);
			}
			token = to_string(id_n) ; 
			s.id = "GV" + string(2 - token.length(), '0') + token ;
			id_n++ ;
			return input ;
		}
		friend ostream &operator << (ostream &output, teacher s){
			output << s.id << " " << s.name << " " << s.short_s  << endl;
			return output ;
		}
		string get_subject(){
			return short_s ;
		}
};


int main(){
	int num, q ;
	cin >> num ;
	cin.ignore() ;
	map<string, vector<teacher>> mp ;
	for(int i = 0 ; i < num ; i++){
		teacher a ;
		cin >> a ;
		mp[a.get_subject()].push_back(a) ;
	}
	cin >> q ;
	cin.ignore() ;
	while(q--){
		string sub, s_sub, token ;
		getline(cin, sub) ;
		stringstream ss(sub) ;
		while(ss >> token){
			s_sub += toupper(token[0]) ;
		}
		cout << "DANH SACH GIANG VIEN BO MON " << s_sub << ":" << endl ;
		for(auto x : mp[s_sub]){
			cout << x ;
		}
	}
}

/*
3
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dang Minh Tuan
An toan thong tin
1
Cong nghe phan mem
*/
