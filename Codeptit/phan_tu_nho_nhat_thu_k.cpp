#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, pos, i ;
		cin >> num >> pos;
		int arr[num] ;
		for(i = 0 ; i < num ; i++) cin >> arr[i] ;
		sort(arr, arr + num ) ;
		cout << arr[pos - 1] << endl;
	}
}
