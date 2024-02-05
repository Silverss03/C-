#include <bits/stdc++.h>
using namespace std ;

int id_num = 1 ;
class employee{
	private:
		string id , name, gender, b_day, address, t_num, c_date ;
	public:
		friend istream &operator >> (istream &input, employee &a){
			getline(input, a.name ) ;
			input >> a.gender  ;
			input >> a.b_day  ;
			cin.ignore() ;
			getline(input, a.address ) ;
			input >> a.t_num  ;
			input >> a.c_date ;
			cin.ignore() ;
			string add(4 - (id_num/10) , '0') ;
			add += (char)(id_num + 48) ;
			id_num++ ;
			a.id.append(add) ;
			return input ;
		}
		friend ostream &operator << (ostream &output, employee a){
			output << a.id << " " << a.name  << " " << a.b_day  << " " << a.address  << " " << a.t_num  << " " << a.c_date << endl ;
			return output ;  
		}
		friend bool cmp(employee a, employee b) ;
};
	bool cmp(employee a, employee b){
		int y1 = 0, m1 = 0 , d1 = 0 ;
		int y2 = 0, m2 = 0, d2 = 0 ;
		for(int i = 6 ; i < 10 ; i++){
			y1 = y1 * 10 + (int)(a.b_day[i] - 48) ;
			y2 = y2 * 10 + (int)(b.b_day[i] - 48) ;
		}
		for(int i = 0 ; i < 3 ; i++){
			m1 = m1 * 10 + (int)(a.b_day[i] - 48) ;
			m2 = m2 * 10 + (int)(b.b_day[i] - 48) ;
		}
		for(int i = 3 ; i < 5 ; i++){
			d1 = d1 * 10 + (int)(a.b_day[i] - 48) ;
			d2 = d2 * 10 + (int)(b.b_day[i] - 48) ;
		}
		if(y1 != y2) return y1 < y2 ;
		if(m1 != m2) return m1 < m2 ;
		return d1 < d2 ;
	}
int main(){
	int num ;
	cin >> num ;
	cin.ignore() ;
	employee a[num] ;
	for(int i = 0 ; i < num ; i++){
		cin >> a[i] ;
	}
	sort(a, a + num, cmp) ;
	for(int i = 0 ; i < num ; i++){
		cout << a[i] ; 
	}
	
}
