#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, i, max = 0 ;
		cin >> num ;
		int arr[num] ;
		for(i = 0 ; i < num ; i++){
			cin >> arr[i] ;
			if(max < arr[i]) max = arr[i] ;
		}
		cout << max << endl ;
	}
}
