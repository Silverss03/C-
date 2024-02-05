#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int n, s, e, res, curr ;
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		res = 1 ;
		cin >> n ;
		multimap <int, int> mp ;
		vector<int> vt1(n), vt2(n) ;
		for(int i = 0 ; i < n ; i++){
			cin >> s >> e ; 
			vt2[i] = e ;
			mp.insert({e,s}) ;
		}
		sort(vt2.begin(), vt2.end()) ;
		int i = 0 ;
		for(auto x : mp) vt1[i++] = x.second ; 
		curr = vt2[0] ;
		for(int i = 1 ; i < n ; i++){
			if(vt1[i] >= curr){
				res++ ;
				curr = vt2[i] ;
			}
		}
		cout << res << endl; 
	}
	
}

