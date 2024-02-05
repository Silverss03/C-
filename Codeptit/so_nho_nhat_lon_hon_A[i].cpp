#include <bits/stdc++.h>
using namespace std;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		int arr[num], arr_2[num] ;
		for(int i = 0 ; i < num ; i++){
			cin >> arr[i] ;
			arr_2[i] = arr[i] ;
		}
		sort(arr_2, arr_2 + num) ;
		for(int i = 0; i < num ; i++){
			int c = 0 ;
			for(int j = 0 ; j < num ; j++){
				char out = '_' ;
				if(arr[i] == arr_2[j] && arr[i] != arr_2[num - 1] && arr_2[j + 1] > arr[i]){
					cout << arr_2[j+1] << " "  ;
					c = 1 ;
					break ;
				}
			}
			if(c == 0) cout << '_' << " " ;
		}
		cout << endl ;
	}
}
