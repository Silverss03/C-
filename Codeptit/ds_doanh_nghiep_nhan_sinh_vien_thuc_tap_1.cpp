#include <bits/stdc++.h>
using namespace std ;

class company{
	string id, name ;
	int number ;
	public:
		friend ostream &operator<<( ostream &output, company &D ) { 
         	output << D.id  << " " << D.name << " " << D.number  << endl ;
         	return output;            
    	}
    	friend istream &operator>>( istream  &input, company &D ) { 
         	cin.ignore() ;
			getline(input, D.id ) ;
         	getline(input, D.name ) ;
         	cin >> D.number ;
         	return input;            
        }
        friend bool cmp (company a, company b) ;
        int get_number(){
        	return number ;
		}
};
	bool cmp(company a, company b){
		if(a.number == b.number) return a.id < b.id ;
    	else return a.number > b.number ;
	}
int main(){
	int num, times, start, end ;
	cin >> num ;
	company a[num] ;
	for(int i = 0 ; i < num ; i++){
		cin >> a[i] ;
	}
	sort(a, a + num, cmp ) ;
	cin >> times ;
	for(int i = 0 ; i < num ; i++){
		cout << a[i] ;
	}

}
