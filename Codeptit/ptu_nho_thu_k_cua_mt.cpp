#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, k ; 
		cin >> num >> k ;
		int arr[num*num] ;
		for(int i = 0 ; i < num*num ; i++) cin >> arr[i] ;
		sort(arr, arr + num*num) ;
		cout << arr[k - 1] << endl  ;
	}
}

