#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, count = 0 ; 
		cin >> num ;
		long long *arr = new long long[num];
		for(int i = 0 ; i < num ; i++){
			cin >> arr[i] ;
			if(arr[i] == 0) count++ ;
		}
		for(int i = 0 ; i < num ; i++){
			if(arr[i] != 0) cout << arr[i] << " " ;
		}
		for(int i = 0 ; i < count ; i++) cout << 0 << " " ;
		cout << endl ;
	}
}
