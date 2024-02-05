#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, sub, i, j ;
		cin >> num >> sub ;
		int arr[num] ;
		for(i = 0 ; i < num ; i++) cin >> arr[i] ;
		for(i = 0 ; i < sub ; i++){
			int start , end, res = 0 ;
			cin >> start >> end ;
			for(j = start - 1 ; j < end ; j++) res += arr[j] ;
			cout << res << endl ; 
		}
	}
}
