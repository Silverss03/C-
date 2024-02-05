#include <bits/stdc++.h>
using namespace std;

int c_fib(int num ){
	if(num == 0 || num == 1) return 1 ;
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
		for(int i = 0 ; i < num ; i++){
			int tmp ;
			cin >> tmp ;
			if(c_fib(tmp) == 1) cout << tmp << " " ;
		}
		cout << endl ; 
	}
}
