#include <bits/stdc++.h>
using namespace std ;

int final = 0 ;
void init(int arr[], int n){
	for(int i = 1 ; i<= n ; i++) arr[i] = i ;
}

void act(int arr[], int n){
	int l = n - 1, r = n ;
	while(l >= 1 && arr[l] > arr[l + 1]) l-- ;
	if(l == 0){
		final = 1 ;
		return ;
	}
	while(r >= 1 && arr[r] < arr[l]) r-- ;
	swap(arr[l], arr[r]) ;
	l++ ;
	r = n ;
	while(l < r){
		swap(arr[l], arr[r]) ;
		l++ ;
		r-- ;
	}
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		final = 0 ;
		int n ;
		cin >> n ; 
		int arr[n] ;
		init(arr, n) ;
		while(final == 0){
			for(int i = 1 ; i <= n ; i++) cout << arr[i] ;
			act(arr,n) ;
			cout << " " ;
		}
		cout << endl ;
	}
}
