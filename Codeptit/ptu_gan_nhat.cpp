#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, k , x, pos ;
		cin >> num ;
		int arr[num] ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		cin >> k >> x ;
		for(int i = 0 ; i < num ; i++) if(arr[i] == x) pos = i ;
		for(int i = pos + 1 ; i < pos + 1 +(k/2) ; i++) cout << arr[i] << " ";
		for(int i = pos - 1 ; i > pos - 1 -(k/2) ; i--) cout << arr[i] << " ";
		cout << endl ;
	}
}
