#include <bits/stdc++.h>
using namespace std ;

int id_n = 1 ;
class teacher{
	string name, subject, short_s, id, lower_name ;
	public :
		friend istream &operator >> (istream &input, teacher &s){
			getline(input, s.name ) ;
			getline(input, s.subject ) ;
			stringstream ss(s.subject ), ss2(s.name)  ;
			string token ;
			while(ss>> token){
				s.short_s += toupper(token[0]);
			}
			token = to_string(id_n) ; 
			s.id = "GV" + string(2 - token.length(), '0') + token ;
			id_n++ ;
			token = "" ;
			while(ss2 >> token){
				for(int i = 0 ; i < token.length(); i++) s.lower_name += tolower(token[i]) ;
			}
			return input ;
		}
		friend ostream &operator << (ostream &output, teacher s){
			output << s.id << " " << s.name << " " << s.short_s  << endl;
			return output ;
		}
		string get_name(){
			return name ;
		}
		friend int find(string s, teacher a);
};

int find (string s, teacher a){	
	stringstream ss1(s) ;
	string token, cmp;
	while(ss1 >> token){
		for(int i = 0 ; i < token.length() ; i++) cmp += tolower(token[i]) ;
	}
	if(a.lower_name.find(cmp) != string::npos) return 1 ;
	return 0 ;
}

int main(){
	int num, times ;
	cin >> num ;
	cin.ignore() ;
	teacher a[num] ;
	for(int i = 0 ; i < num ; i++) cin >> a[i] ;
	cin >> times ;
	cin.ignore() ;
	while(times--){
		string s ;
		getline(cin, s) ;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl ;
		for(int i = 0 ; i < num ; i++){
			if(find(s, a[i]) == 1) cout << a[i] ;
		}
	}
}
