#include <bits/stdc++.h>
using namespace std ;

int c = 0 ;

struct SinhVien{
	string ten ;
	string lop ;
	string date;
	double GPA ;
};

void nhap (SinhVien x[], int N ){
	if(c == 0) cin.ignore() ;
	for(int i = 0 ; i < N ; i++){
		getline(cin, x[i].ten ) ;
		string res = "" ;
		stringstream copy(x[i].ten ) ;
		string token ;
		while(copy >> token){
			res += toupper(token[0]) ;
			for(int i = 1 ; i < token.length() ; i++) res += tolower(token[i]) ;
			res += " " ;
		}
		res.erase(res.length() - 1) ;
		x[i].ten = res ;
		getline(cin, x[i].lop ) ;
		getline(cin, x[i].date ) ;
		cin >> x[i].GPA  ;	
		cin.ignore() ;
	}
	c = 1;
}

void in(SinhVien x[], int N){
	int arr[N] ;
	for(int i = 0 ; i < N ; i++) arr[i] = x[i].GPA ;
	sort(arr, arr + N) ;
	for(int i = N - 1  ; i >= 0 ; i--){
		for(int j = 0 ; j < N ; j++){
			if(x[j].GPA == arr[i]){
				int tmp = 0, c = j + 1;
				while(c > 0){
					tmp++ ;
					c /= 10 ;
				}
				char code = '0' ;
				if(x[j].date[1] == '/' ) x[j].date.insert(0, "0") ;
				if(x[j].date[4] == '/') x[j].date.insert(3, "0") ;
				cout << "B20DCCN" << string(3-tmp,code) << j + 1<< " " << x[j].ten << " " << x[j].lop << " " << x[j].date << " " << fixed << setprecision(2) << x[j].GPA << endl ; 
				break ; 
			}
		}
	}
}
	
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
