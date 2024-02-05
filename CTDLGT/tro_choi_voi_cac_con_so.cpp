#include <bits/stdc++.h>
using namespace std ;

int n, arr[10], check[10] ;

bool Test(){
	for(int i = 1 ; i < n ; i++){
		if(abs(arr[i] - arr[i + 1]) == 1) return false ;
	}
	return true ;
}

void out(){
	if(Test()){
		for(int i = 1 ; i <= n ; i++) cout << arr[i];
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
	int tests ;
	cin >> tests ;
	while(tests--){
		cin >> n ;
		Try(1) ;
	}
}
