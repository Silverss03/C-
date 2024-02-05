#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, sum_l = 0, sum_r = 0, c = 0 ;
		cin >> num ;
		int arr[num] ;
		for(int i = 0 ; i < num ; i++){
			cin >> arr[i] ;
			sum_r += arr[i] ;
		}
		for(int i = 0 ; i < num ; i++){
			sum_r -= arr[i] ;
			if(sum_l == sum_r){
				cout << i << " " ;
				c = 1 ;
			}
			sum_l += arr[i] ;
		}
		if(c == 0 ) cout << "-1" << endl;
		else cout << endl ;
	}
}
