#include <bits/stdc++.h>
using namespace std ;

int main(){
	int num, i ;
	cin >> num ;
	int arr[num], count[1000] = {0} ;
	for(i = 0 ; i < num ; i++){
		cin >> arr[i] ;
		count[arr[i]]++ ;
	}
	sort(arr, arr + num) ;
	for(i = 0 ; i < num ; i++){
		if(count[arr[i]] != 0 ){
			cout << arr[i] << " " ;
			count[arr[i]] = 0 ;
		}
	}
}
