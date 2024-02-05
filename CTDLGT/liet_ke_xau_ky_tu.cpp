#include <bits/stdc++.h>
using namespace std ;

int num, arr[36], k ;

void out(){
	for(int i = 1 ; i <= k ; i++) cout << (char)('A' + arr[i] );
	cout << endl ;
}
void Try(int i){
	for(int j = arr[i - 1] ; j < num ; j++){
		arr[i] = j ; 
		if(i == k) out() ;
		else Try(i + 1) ;
	}
}
int main(){
	char n ;
	cin >> n >> k;
	num = (int)(n) - (int)('@') ;
	Try(1) ;
}
