#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		map<long long, bool> mp ;
		for(int i = 0 ; i < num ; i++){
			long long tmp ; 
			cin >> tmp ;
			mp[tmp] = true ;
		}
		for(int i = 0 ; i < num ; i++){
			if(mp[i]) cout << i << " " ;
			else cout << "-1 " ;
		}
		cout << endl ;
	}
}
