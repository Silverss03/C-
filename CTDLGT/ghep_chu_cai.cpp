#include <bits/stdc++.h>
using namespace std ;

int n, arr[30], check[30] ;

bool condition(){
	for(int i = 2 ; i < n ; i++){
		if(arr[i] == 1 || arr[i] == 5){
			if((arr[i - 1] == 2 || arr[i - 1] == 3 || arr[i - 1] == 4 || arr[i - 1] == 8 || arr[i - 1] == 7  || arr[i - 1] == 6) && (arr[i + 1] == 2 || arr[i + 1] == 3 || arr[i + 1] == 4 || arr[i + 1] == 8 || arr[i + 1] == 7  || arr[i + 1] == 6)) return false ;
		}
	}
	return true ;
}

void out(){
	if(condition()){
		for(int i = 1 ; i <= n ; i++) cout << (char)('@' + arr[i] );
		cout << endl ;
	}
}

void Try(int i){
	for(int j = 1 ; j <= n ; j++){
		if(check[j] == 0){
			arr[i] = j ;
			check[j] = 1;
			if(i == n) out() ;
			else Try(i + 1) ;
			check[j] = 0 ;
		}
	}
}
int main(){
	char c ;
	cin >> c ;
	n = (int)(c) - (int)('@') ;
	Try(1) ;
}
