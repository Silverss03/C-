#include <bits/stdc++.h>
using namespace std ;

int id_n = 1 ;
class employee{
	private:
		string id, name, gender, b_day, address, t_num, c_date ;
	public:
		friend istream &operator >> (istream &input, employee &a){
			string tmp = to_string(id_n) ;
			id_n++ ;
			a.id = string(5 - tmp.length(), '0') + tmp ;
			cin.ignore() ;
			getline(input, a.name ) ;
			input >> a.gender  ;
			input >> a.b_day  ;
			cin.ignore() ;
			getline(input, a.address ) ;
			input >> a.t_num  ;
			input >> a.c_date ;
			return input ;
			
		}
		friend ostream &operator << (ostream &output, employee a){
			output << a.id << " " << a.name  << " " << a.b_day  << " " << a.address  << " " << a.t_num  << " " << a.c_date << endl ;
			return output ;  
		}
		
};

int main(){
	int num ;
	cin >> num ;
	employee a[num] ;
	for(int i = 0 ; i < num ; i++) cin >> a[i] ;
	for(int i = 0 ; i < num ; i++) cout << a[i] ; 
}

/*
3
Nguyen Van A
Nam
10/22/1982
ML - HD- HN
8333012345
31/12/2013
Ly Thi B
Nu
10/15/1988
ML - HD - HN
8333012346
22/08/2011
Hoang Thi C
Nu
04/02/1981
ML - HD - HN
8333012347
22/08/2011
*/
