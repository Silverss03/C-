#include <bits/stdc++.h>
using namespace std;

int main(){
	int num, res = 0 ;
	cin >> num ;
	int arr[num] ;
	for(int i = 0 ; i < num ; i++){
		cin >> arr[i] ;
		if(i > 0 && arr[i] < arr[i - 1]){
			res += arr[i - 1] - arr[i] ; 
			arr[i] = arr[i - 1] ;
		}
	}
	cout << res ;
}
