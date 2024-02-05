#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		int arr[num] ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		sort(arr, arr + num ) ;
		if(num % 2 == 0){
			cout << arr[(num/2) - 1] << endl ;
		}
		else{
			cout << arr[num/2] << endl ;
		}
	}
}
