#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, max = -1, start , end ;  
		cin >> num ;
		int arr[num] ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		for(int i = 0 ; i < num - 1 ; i++){
			for(int j = i + 1 ; j < num ; j++){
				if(arr[j] > arr[i]){
					int tmp = arr[j] - arr[i] ;
					if(tmp > max) max = tmp ;
				}
			} 
			 
		}
		cout << max << endl ;
	}
}
