#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ; 
		cin >> num ;
		vector<int> a(num), b(num) ;
		for(int i = 0 ; i < num ; i++){
			cin >> a[i] ;
			b[i] = a[i] ;
		}
		long long tmp = a[0] ;
		long long extra = 0 ;
		long long new_ex ;
		for(int i = 1 ; i < num ; i++){
			new_ex = max(tmp, extra) ;
			tmp = extra + a[i] ;
			extra = new_ex ;
		}
		cout << max(tmp, extra) << endl ;
	}
}
