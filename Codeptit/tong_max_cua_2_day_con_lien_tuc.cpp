#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, min = -10e9 ; 
		cin >> num ;
		vector<int> a(num) ;
		for(int i = 0 ; i < num ; i++){
			cin >> a[i] ;
			if(a[i] > min) min = a[i] ;
		}
		if(min <= 0) cout << min << endl ;
		else{
			long long tmp = 0 , max = -10e9 ;
			for(int i = 0 ; i < num ; i++){
				tmp += a[i] ;
				if(max < tmp) max = tmp ;
				if(tmp < 0) tmp = 0 ;
			}
			cout << max << endl ;
		}
		
	}
}
