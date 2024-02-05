#include <bits/stdc++.h>
using namespace std ;

int final = 0 ;
void init(int arr[], int len){
	for(int i = 1 ; i <= len ; i++) arr[i] = 0 ;
}

void act(int arr[], int len){
	int i = len ; 
	while(i >= 1 && arr[i] == 1) i-- ;
	if(i == 0){
		final = 1 ;
		return ;
	}
	arr[i] = 1 ;
	for(int j = i + 1 ; j <= len ; j++) arr[j] = 0 ;
}
int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		final = 0 ;
		int len ;
		cin >> len ;
		int arr[len] ;
		init(arr, len) ;
		while(final == 0){
			for(int i = 1 ; i <= len ; i++){ 
				if(arr[i] == 0) cout << 'A' ;
				else cout << 'B' ;
			}
			act(arr, len) ;
			cout << " " ;
		}		
		cout << endl;
	}
}
