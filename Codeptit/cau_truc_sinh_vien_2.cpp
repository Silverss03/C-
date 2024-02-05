#include <bits/stdc++.h>
using namespace std ;

struct SinhVien{
	string s_id, name, grade, b_day ;
	float GPA ;
};

void nhapThongTinSV(SinhVien &a){
	getline(cin, a.name ) ;
	stringstream copy(a.name ) ;
	string token, res = "" ;
	while(copy >> token){
		res += token ;
		res += " " ;
	} 
	res.erase(res.end() - 1) ;
	a.name = res ;
	cin >> a.grade  ;
	cin >> a.b_day  ;
	if(a.b_day[1] == '/') a.b_day.insert(0, "0") ;
	if(a.b_day[4] == '/') a.b_day.insert(3, "0") ;
	cin >> a.GPA ;	
}

void inThongTinSV(SinhVien a){
	cout << "N20DCCN001" << " " << a.name << " " << a.grade << " " << a.b_day << " " << fixed << setprecision(2) << a.GPA ;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
