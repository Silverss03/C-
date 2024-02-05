#include <bits/stdc++.h>
using namespace std;

class employee{
	string id, name, b_day, token ;
	long long b_salary, add_on, gift, income ,tmp;
	public:
		void input(){
			cin.ignore() ;
			getline(cin, id) ;
			string pos = "";
			int i = 0 ;  
			while(id[i] < '0' || id[i] > '9' ){
				pos += id[i] ; 
				i++;
			}
			if(pos == "GD-"){
				add_on = 2000000; 
				token = "Giam doc" ;
			}
			else if(pos == "PGD-"){
				add_on = 1000000;
				token = "Pho giam doc" ;
			}
			else if(pos == "TP-"){
				add_on = 500000 ;
				token = "Truong phong" ;
			}
			else{
				add_on = 200000 ;
				token = "Nhan vien" ;
			}
			getline(cin, name) ;
			cin >> b_day ;
			if(b_day[1] == '/') b_day.insert(0, "0") ;
			if(b_day[4] == '/') b_day.insert(3, "0") ;
			double w_day ;
			cin >> tmp ;
			if(tmp >= 27) w_day = (double)0.2 ;
			else if(tmp >= 25 && tmp < 27) w_day = (double)0.1 ;
			else w_day = 0 ;
			cin >> b_salary ;
			income =  b_salary*tmp + add_on + w_day*b_salary*tmp ;
		}
		void output(){
			cout << id << " " << name << " " << token << " " << b_day << " " << tmp << " " << b_salary << " " << income << endl ;
		}
		friend bool cmp(employee a, employee b) ;
};

bool cmp(employee a, employee b){
	if(a.income == b.income) return a.id> b.id ;
	return a.income > b.income ;
}
int main(){
	int num ;
	cin >> num ;
	employee a[num] ;
	for(int i = 0 ; i < num ; i++){
		a[i].input() ;
	}
	sort(a, a + num, cmp) ;
	for(int i = 0 ; i < num ; i++) a[i].output() ;
}
