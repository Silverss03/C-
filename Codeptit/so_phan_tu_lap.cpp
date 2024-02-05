#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num ;
		cin >> num ;
		set <int> st ;
		for(int i = 0 ; i < num ; i++){
			int tmp ;
			cin >> tmp ;
			st.insert(tmp) ;
		}
		cout << (num - st.size()) * 2 << endl ;
	}
}
