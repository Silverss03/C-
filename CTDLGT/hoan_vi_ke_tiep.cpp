#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		int arr[num], check = num ; 
		for(int i = 1 ; i <= num ; i++) cin >> arr[i] ;
		while(check > 1  && arr[check] < arr[check - 1]) check-- ;
		if(check == 1){
			for(int i = 1; i <= num ; i++) cout << i << " " ;
			cout << endl ;
		} 
		else{
			int j = num, i = check - 1 ; 
			while(j > 1 && arr[i] > arr[j]) j-- ;
			swap(arr[i], arr[j]) ;
			int l = i + 1, r = num ;
			while(l < r){
				int tmp = arr[l] ;
				arr[l] = arr[r] ;
				arr[r] = tmp ;
				l++ ;
				r-- ;
			}
			for(int i = 1 ; i <= num ; i++) cout << arr[i] << " " ;
			cout << endl ;
		}
	}
}

