#include <bits/stdc++.h>
using namespace std ;

int main(){
	int num ;
	cin >> num ;
	cin.ignore() ;
	map<string,int> mp;
	vector<string> v ;
	for(int i = 0 ; i < num ; i++){
		string s ;
		getline(cin,s) ;
		v.push_back(s) ;
	}
	for(auto x : v){
		if(mp[x] == 0){
			cout << x << endl ;
			mp[x]++ ;
		}
		else{
			cout << x << mp[x] << endl ;
			mp[x]++ ; 
		}
	}
}
