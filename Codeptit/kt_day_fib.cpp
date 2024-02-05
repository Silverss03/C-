#include <bits/stdc++.h>
using namespace std ;

int check_f(int num){
	if(num == 0) return 1 ;
	int f1 = 0 , f2 = 1, fn = 1;
	while(fn < num){
		f1 = f2 ;
		f2 = fn ;
		fn = f1 + f2 ;
	}
	if(fn == num) return 1 ;
	return 0 ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		vector<int> vt ;
		for(int i = 0 ; i < num ; i++){
			int tmp ;
			cin >> tmp ;
			if(check_f(tmp) == 1) vt.push_back(tmp) ;
		}
		for(auto x : vt) cout << x << " " ;
		cout << endl ;
	}
}
