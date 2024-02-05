#include <bits/stdc++.h>
using namespace std ;

class employee{
	private:
		string name, gender, b_day, address, t_num, c_date ;
	public:
		friend istream &operator >> (istream &input, employee &a){
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
			output << "00001 " << a.name  << " " << a.b_day  << " " << a.address  << " " << a.t_num  << " " << a.c_date << endl ;
			return output ;  
		}
};

int main(){
	employee a ;
	cin >> a ;
	cout << a ; 
}
