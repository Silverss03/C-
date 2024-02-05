#include <bits/stdc++.h>
using namespace std ;

int id_n = 1 ;
class student{
	string id, name = "", birthday, grade ;
	double GPA ;
	public:
		void input(){
			cin.ignore() ;
			string tmp, token, n = to_string(id_n) ;
			id = "SV" + string(3- n.length(), '0') + n;
			getline(cin, tmp) ;
			stringstream ss(tmp) ;
			while(ss >> token){
				name += toupper(token[0]) ;
				for(int i = 1 ; i < token.length() ; i++) name += tolower(token[i]) ;
				name += ' ' ;
			}
			cin >> grade ;
			cin >> birthday ;
			if(birthday[1] == '/') birthday.insert(0, "0") ;
			if(birthday[4] == '/') birthday.insert(3, "0") ;
			cin >> GPA ;
			id_n++ ;
		}
		void output(){
			cout << id << " " << name << grade << " " << birthday << " " << fixed << setprecision(2) << GPA << endl ;
		}
		friend bool cmp(student a, student b) ;
};

bool cmp(student a, student b){
	if(a.GPA == b.GPA) return a.id < b.id ;
	return a.GPA > b.GPA ;	
}

int main(){
	int num ;
	cin >> num ;
	student arr[num] ;
	for(int i = 0 ; i < num ; i++) arr[i].input() ;
	sort(arr, arr + num , cmp) ;
	for(int i = 0 ; i < num ; i++) arr[i].output() ;
}
