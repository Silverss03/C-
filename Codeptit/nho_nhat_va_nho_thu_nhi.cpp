#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, min = - 1 ;
		cin >> num ;
		int *arr = new int[num] ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		sort(arr, arr + num) ;
		for(int i = 1 ; i < num ; i++){
			if(arr[i] != arr[0]){
				min = arr[i] ;
				break ;
			}
		}
		if(min != -1 )cout << arr[0] << " " << min << endl ;
		else cout << -1 << endl ;
	}
}
