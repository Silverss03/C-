#include <bits/stdc++.h>
using namespace std;

map<string,int > mp ;
class stogare{
	int  in, sell, income ;
	string name, brand, div, id ;
	public:
		void input(){
			cin.ignore() ;
			getline(cin, name) ;
			mp[name]++ ;
			getline(cin, brand) ;
			getline(cin, div) ;
			cin >> in >> sell ;
			income = sell - in ;
			string token, res = "" ;
			stringstream ss(name) ;
			while(ss >> token){
				res += toupper(token[0]) ;
			}
			string n = to_string(mp[name]) ;
			res += string(4 - n.length() , '0') + n ;
			id = res ;
		}
		void output(){
			cout << id << " " << name << " " << brand << " " << div << " " << in << " " << sell << endl ;
		}
		friend bool cmp(stogare a, stogare b) ;
};

	bool cmp(stogare a, stogare b){
		if(a.income == b.income ) return a.id < b.id ;
		return a.income > b.income ;
	}
int main() {
    int num ;
    cin >> num ;
	stogare a[num] ;
	
	for(int i = 0 ; i < num ; i++) {
		a[i].input() ;
	}
	sort(a, a + num , cmp) ;
	for(int i = 0 ; i < num ; i++){
		a[i].output() ;
	}
    return 0;
}
