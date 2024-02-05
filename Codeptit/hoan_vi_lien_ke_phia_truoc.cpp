#include <bits/stdc++.h>
using namespace std ;

void reverse(int arr[], int start, int end){
	while(start < end){
		int tmp ;
		tmp = arr[start] ;
		arr[start] = arr[end] ;
		arr[end] = tmp ;
		start++ ;
		end-- ;
	}	
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, min = 10e4, j ;
		cin >> num ;
		int arr[num] ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		for(int i = num - 1 ; i > 0 ; i--){
			if(arr[i - 1] > arr[i]){
				int tmp ;
				for(j = num - 1 ; j >= i ; j--){
					if(arr[j] < arr[i - 1] && arr[j] < min) min = arr[j] ;
				}
				tmp = arr[i] ;
				arr[i] = arr[j] ;
				arr[j] = tmp ; 
				reverse(arr, i + 1 , num) ;
				break ;
			}
		}
		for(int i = 0 ; i < num ; i++) cout << arr[i] << " " ;
		cout << endl ;
	}
}
