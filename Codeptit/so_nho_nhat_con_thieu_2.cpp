#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		int* arr = new int[1000000] ;
		memset(arr, 0, sizeof(arr)) ;
		for(int i = 0 ; i < num ; i++){
			int tmp ;
			cin >> tmp ;
			if(tmp > 0 )arr[tmp] = 1 ;
		}
		for(int i = 1 ; i <= 10e6 + 1 ; i++){
			if(arr[i] == 0){
				cout << i << endl ;
				break ;
			}
		}
		delete[] arr ;
	}
}
