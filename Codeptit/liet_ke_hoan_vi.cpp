#include <bits/stdc++.h>
using namespace std ;

void func(int arr[], int n){
	int i ;
	for(i = 1 ; i <= n ; i++) arr[i] = i ; 
	while(1){
		for(i = 1 ; i <= n ; i++) cout << arr[i] ;
		cout << " " ;
		i = n - 1 ;
		while(i > 0 && arr[i] > arr[i + 1]) i-- ;
		if(i == 0) return ;
		int k = n ;
		while(arr[k] < arr[i]) k-- ;
		int tmp = arr[i] ;
		arr[i] = arr[k] ;
		arr[k] = tmp ; 
		int l = i + 1, r = n ;
		while(l < r){
			tmp = arr[l] ;
			arr[l] = arr[r] ;
			arr[r] = tmp ;
			l++ ; 
			r-- ;
		}
	}

}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k ;
		cin >> n  ;
		int * arr = new int[n] ;
		func(arr, n) ;
		cout << endl ;		
		delete[] arr ;
	}
}
