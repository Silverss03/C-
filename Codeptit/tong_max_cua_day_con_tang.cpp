#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, min = -10e9 ; 
		cin >> num ;
		vector<int> a(num), b(num) ;
		for(int i = 0 ; i < num ; i++){
			cin >> a[i] ;
			b[i] = a[i] ;
		}
		long long count = 0 ;
		for(int i = 0 ; i < num ; i++){
			long long max = 0 ; 
			for(int j = 0 ; j < i ; j++){
				if(a[i] > a[j]){
					if(b[j] > max) max = b[j] ;
				}
			}
			b[i] += max ; 
			if(count < b[i]) count = b[i] ;
		}
		cout << count << endl ;
	}
}
