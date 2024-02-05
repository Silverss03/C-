#include <bits/stdc++.h>
using namespace std;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		set <int> st ;
		for(int i = 0 ; i < num ; i++){
			long long tmp ; 
			cin >> tmp ;
			while(tmp > 0){
				st.insert(tmp % 10) ;
				tmp /= 10 ;
			}
		}
		for(auto x : st) cout << x << " " ;
		cout << endl ;
	}
}
