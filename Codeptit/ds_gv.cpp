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
		friend bool cmp  (teacher a, teacher b);
};

bool cmp (teacher a, teacher b){
	stringstream s1(a.name) ;
	stringstream s2(b.name ) ;
	string c1, c2, res1, res2 ; 
	while(s1 >> c1) res1 = c1 ;
	while(s2 >> c2) res2 = c2 ;
	if(res1 != res2) return res1 < res2 ;
	else return a.id < b.id ;
}

int main(){
	int num ;
	cin >> num ;
	cin.ignore() ;
	teacher a[num] ;
	for(int i = 0 ; i < num ; i++) cin >> a[i] ;
	sort(a, a + num, cmp) ;
	for(int i = 0 ; i < num ; i++) cout << a[i] ;
}
