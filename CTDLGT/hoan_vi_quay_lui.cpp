#include <bits/stdc++.h>
using namespace std; 

int n, A[10], B[10] ;
void in(){
	for(int i = 1 ; i <= n ; i++) cout << A[i] << " " ;
	cout << endl ;
}

void quaylui(int i){
	for(int j = 1 ; j <= n ; j++){
		if(B[j] == 0){
			A[i] = j ; 
			B[j] = 1 ; 
			if(i == n) in() ;
			else quaylui(i + 1) ;
			B[j] = 0 ;
		}
	}
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		//final = 0 ;
		cin >> n ; 
		int arr[n] ;
		quaylui(1) ;
		cout << endl ;
	} 
}
