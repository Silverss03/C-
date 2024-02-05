#include <bits/stdc++.h>
using namespace std ;

void binary_build(int arr[], int num, int length){
	if(num >= length){
		for(int i = 0 ; i < length ; i++) cout << arr[i]  ;
		cout << " " ;
		return ;
	}
	for(int i = 0 ; i <= 1 ;i++){
		arr[num] = i ;
		binary_build(arr, num + 1, length) ;
	}
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, b = 0 ;
		cin >> num ;
		int arr[num] = {0} ;
		binary_build(arr, 0, num) ;
		cout << endl ;
	}
}
