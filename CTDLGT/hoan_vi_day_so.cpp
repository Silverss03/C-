#include <bits/stdc++.h>
using namespace std ;

int final = 0 ;

void init(vector<int> &arr, unordered_map<int,int> &mp, int num){
	for(int i = 0 ; i < num ; i++){
		int tmp ;
		cin >> tmp ;
		arr.push_back(tmp) ;
	}
	sort(arr.begin(), arr.end()) ;
	for(int i = 0 ; i < num ; i++){
		mp.insert({i, arr[i]});
		arr[i] = i ;
	}
}

void act(vector<int> &arr, int num){
	int i = num - 2, j = num - 1 ;
	while(i >= 0 && arr[i]> arr[i + 1]) i-- ;
	if(i < 0){
		final = 1 ;
		return ;
	}
	while(j >= 0 && arr[j] < arr[i]) j-- ;
	swap(arr[i], arr[j]) ;
	i++ ;
	j = num - 1 ;
	while(i < j){
		swap(arr[i], arr[j]) ;
		i++ ;
		j-- ;
	}
}
int main(){
	int num ;
	cin >> num ;
	vector <int> arr ;
	unordered_map<int, int> mp ;
	init(arr, mp, num) ;
	while(final == 0){
		for(int i = 0 ; i < num ; i++){
			cout << mp[arr[i]] << " " ;
		}
		act(arr, num) ;
		cout << endl ;
	}
}
