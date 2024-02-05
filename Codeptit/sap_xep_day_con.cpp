#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, start, end ;
		cin >> num ;
		int *arr = new int[num] ;
		int *res = new int[num] ;
		for(int i = 0 ; i < num ; i++){
			cin >> arr[i] ;
			res[i] = arr[i] ;
		}
		sort(arr, arr + num) ;
		for(int i = 0 ; i < num ; i++){
			if(arr[i] != res[i]){
				start = i ; 
				break ;
			}
		}
		for(int i = num - 1 ; i >= 0 ; i--){
			if(arr[i] != res[i]){
				end = i ;
				break ;
			}
		}
		cout << start + 1 << " " << end + 1 << endl;
	}
}
