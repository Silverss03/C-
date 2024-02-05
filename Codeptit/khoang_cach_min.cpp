#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		int arr[num], distance[num] ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		sort(arr, arr + num) ;
		for(int i = 0 ; i < num - 1; i++){
			distance[i] = abs(arr[i + 1] - arr[i]) ;
		}
		sort(distance, distance + num - 1) ;
		cout << distance[0] << endl ;
	}
}
