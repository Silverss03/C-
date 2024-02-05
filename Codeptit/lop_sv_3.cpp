#include <bits/stdc++.h>
using namespace std; 

class SinhVien{
	private :
		string name, grade, b_day, tmp ;
		float GPA ;
	public :
		SinhVien(){
		}
		char update(char arr[], int len){
			if(arr[0] >= 'a' && arr[0] <= 'z') arr[0] -= 32 ;
			for(int i = 1 ; i < len ; i++){
				if(arr[i] >= 'A' && arr[i] <= 'Z') arr[i] += 32 ;
			}
		}
		friend ostream &operator << (ostream &output, const SinhVien &D){
			output << "B20DCCN001" << " "  << D.name << " " << D.grade  << " " << D.b_day  << " " << fixed << setprecision(2) << D.GPA  ;
			return output ;
		}
		friend istream &operator >> (istream &input, SinhVien &D){
			getline(input, D.name ) ;
			string res = "" ;
			stringstream copy(D.name ) ;
			string token ;
			while(copy >> token){
				res += toupper(token[0]) ;
				for(int i = 1 ; i < token.length() ; i++) res += tolower(token[i]) ;
				res += " " ;
			}
			res.erase(res.length() - 1) ;
			D.name = res ;
			input >> D.grade >> D.b_day >> D.GPA ;
			if(D.b_day[1] == '/' ) D.b_day.insert(0, "0") ;
			if(D.b_day[4] == '/') D.b_day.insert(3, "0") ;
			return input ;
		}
};
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
