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
		for(i = pos ; i < num ; i ++) cout << arr[i] << " " ;
		for(i = 0 ; i < pos ; i++) cout << arr[i] << " " ;
		cout << endl ;
	}
}
