#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, m, k, tmp, res = 0, a, b, c ;
		multiset<int> st1, st2, st3 ;
		cin >> n >> m >> k ;
		for(int i = 0 ; i < n ; i++){
			cin >> tmp ;
			st1.insert(tmp) ;
		}
		for(int i = 0 ; i < m ; i++){
			cin >> tmp ;
			if(st1.find(tmp)!= st1.end()){
				st2.insert(tmp) ; 
			}
		}
		for(int i = 0 ; i < k ; i++){
			cin >> tmp ;
			if(st2.find(tmp)!= st2.end()){
				st3.insert(tmp) ;
			}
		}
		if(!st3.empty() ){
			for(auto x : st3){
				cout << x << " " ;
			}
			cout << endl ;
		}
		else cout << "NO\n" ;
	}
}


