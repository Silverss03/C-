#include<bits/stdc++.h>
using namespace std ;

int final = 0 ;
void init(int arr[] ,int n, int k){
	for(int i = 1 ; i <= k ; i++) arr[i] = i ;
}

void act(int arr[], int n, int k){
	int i = k ;
	while(i >= 1 && arr[i] == n - k + i) i-- ;
	if(i == 0){
		final = 1 ;
		return ;
	}
	arr[i]++ ;
	for(int j = i + 1 ; j <= k ; j++) arr[j] = arr[j - 1] + 1 ;
}

int main(){
	int n, k, arr[1001] ;
	cin >> n >> k ;
	set<int> st ;
	vector<int> vt ;
	for(int i = 0 ; i < n ; i++){
		int tmp ;
		cin >> tmp ;
		st.insert(tmp) ;
	}
	for(auto x : st){
		vt.push_back(x) ;
	}
	n = st.size() ;
	init(arr, n, k) ;
	while(final == 0){
		for(int i = 1 ; i <= k ; i++) cout << vt[arr[i] - 1] << " " ;
		cout << endl ;
		act(arr,n,k) ;
	}
	
}
