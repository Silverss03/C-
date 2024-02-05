#include <bits/stdc++.h>
using namespace std ;

int n, k ; 
vector<string> names ;
vector<int> num ;
int used[50] ;

void Act(int i){
	for(int j = num[i - 1] + 1 ; j <= n - k + i ; j++){
		num[i] = j ; 
		if(i == k){
	    	for(int i = 1 ; i <= k ; i++) cout << names[num[i] - 1] << " ";
	        cout << endl ;
		}
		else Act(i + 1) ;
	}
}

int main(){
	cin >> n >> k ;
	set<string> st ;
	for(int i = 0 ; i <= n ; i++) num.push_back(0) ;
	for(int i = 0 ; i < n ; i++){
		string tmp ;
		cin >> tmp ;
		st.insert(tmp) ;
	}
	for(auto x : st) names.push_back(x) ;
	n = names.size() ;
	Act(1) ;
}
