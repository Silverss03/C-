#include <bits/stdc++.h>
using namespace std ;

int check(vector <int> arr, int num){
	for(int i = 0 ; i < num - 3 ; i++){
		if(arr[i] == 0 && arr[i + 1] == 0 && arr[i + 2] == 0 && arr[i + 3] == 0) return 0 ;
	}
	for(int i = 0 ; i < num - 1 ; i++){
		if(arr[i] == 1 && arr[i + 1] == 1) return 0 ;
	}
	if(arr[0] == 1 && arr[num - 1] == 0) return 1 ;
	return 0 ;
}
int main(){
	int num, final = 0 ;
	cin >> num ;
	vector <int> arr ;
	for(int i = 0 ; i < num ; i++) arr.push_back(0);
	while(final == 0){
		int tmp = num - 1 ;
		while(tmp >= 0 && arr[tmp] == 1) tmp-- ;
		if(tmp < 0){
			final = 1 ;
			break ;
		}
		arr[tmp] = 1 ;
		for(int j = tmp + 1 ; j < num ; j++) arr[j] = 0 ;
		if(check(arr,num) == 1){
			for(int j = 0 ; j < num ; j++){
				if(arr[j] == 1) cout << 8 ;
				else cout << 6 ;
			}
			cout << endl ;
		}
	}
}

