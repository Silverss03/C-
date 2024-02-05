#include <iostream>
#include <set>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		int tmp, n , m ;
		cin >>  n >> m ;
		set<int> uni, inter, st ;
		for(int i = 0 ; i < n ; i++){
			cin >> tmp ;
			st.insert(tmp) ;
			inter.insert(tmp) ;  
		}
		for(int i = 0 ; i < m ; i++){
			cin >> tmp ; 
			if(st.find(tmp) != st.end()) uni.insert(tmp) ;
			inter.insert(tmp) ;  
		}
		for(auto x : inter) cout << x << " " ;
		cout << endl ;
		for(auto x : uni) cout << x << " " ;
		cout << endl; 
	}
}

