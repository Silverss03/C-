#include <bits/stdc++.h>
using namespace std ;

int main(){
	int n, c, res = 0 ;
	cin >> n >> c ;
	int arr[n] ;
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i] ;
		if(i > 0 && (arr[i] - arr[i - 1]) <= c) res++ ;
		else if((arr[i] - arr[i - 1]) > c) res = 1 ;
	}
	cout << res << endl;
}
