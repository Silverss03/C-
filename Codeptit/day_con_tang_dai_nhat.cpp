#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests; 
	cin >> tests;
	while(tests--){
		int num ;
		cin >> num ;
		vector<int> a(num), b(num, 1) ;
		for(int i = 0 ; i < num ; i++) cin >> a[i] ;
		int dem = 0 ; 
		for(int i = 0 ; i < num ; i++){
			for(int j = 0 ; j < i ; j++) if(a[i] > a[j]) b[i] = max(b[i], b[j] + 1) ;
			if(dem < b[i]) dem = b[i] ;
		}
		cout << dem << endl ;
	}
}
