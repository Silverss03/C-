#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, res = 1 ;
		cin >> num ;
		int *arr = new int[num] ;
		for(int i = 0 ; i < num - 1; i++) cin >> arr[i] ;
		sort(arr, arr + num - 1) ;
		for(int i = 0 ; i < num - 1; i++){
			if(arr[i] == res) res++ ;
			else{
				cout << res << endl ; 
				break ;
			}
		}
		delete[] arr ;
	}
}
