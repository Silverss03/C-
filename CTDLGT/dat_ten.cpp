#include <bits/stdc++.h>
using namespace std ;

int n, k, arr[15] ;
map<int, string> mp;

void out(){
	for(int i = 1 ; i <= k ; i++) cout << mp[arr[i]] << " " ;
	cout << endl ;
}

void Try(int i){
	for(int j = arr[i - 1] + 1 ; j <= n ; j++){
		arr[i] = j ;
		if(i == k) out() ;
		else Try(i + 1) ;
	}
}
int main(){
	cin >> n >> k ;
	set<string> st ;
	for(int i = 1 ; i <= n ; i++){
		string tmp ;
		cin >> tmp ;
		st.insert(tmp) ;
	}
	n = st.size() ;
	int tmp = 1 ;
	for(auto x : st){
		mp[tmp] = x ;
		tmp++ ;
	}
	Try(1) ;
}
