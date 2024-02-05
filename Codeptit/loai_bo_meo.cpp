#include <bits/stdc++.h>
using namespace std ;

int main(){
	int num, max = -1, repeat = 1 ;
	cin >> num ;
	int arr[num] ;
	for(int i = 0 ; i < num ; i++){
		cin >> arr[i] ;
		if(i != 0 && arr[i] == arr[i - 1]){
			repeat++ ;
			if(repeat > max) max = repeat ;
		}
		else if(i != 0 && arr[i] != arr[i - 1]) repeat = 1 ;
	}
	cout << num - max;
}
