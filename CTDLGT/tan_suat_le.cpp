#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ; 
		cin >> num ; 
		map<int,int> mp ;
		for(int i = 0 ; i < num ; i++){
			int tmp ;
			cin >> tmp ;
			mp[tmp]++ ;
		}
		for(auto x : mp){
			if(x.second % 2 == 1){
				cout << x.first << endl ;
				break ;
			}
		}
	}
}
