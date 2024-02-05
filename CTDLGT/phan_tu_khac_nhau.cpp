#include <iostream>
#include <vector>
#include <map>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, tmp, res ;
		cin >> num ;
		vector<long long> vt ;
		map<int, int> mp ;
		for(int i = 0 ; i < num ; i++){
			cin >> tmp ;
			mp[tmp]++ ;
			vt.push_back(tmp) ;
		}
		for(int i = 0 ; i < num - 1; i++){
			cin >> tmp ;
			mp[tmp]++ ;
		}
		for(int i = 0 ; i < num ; i++){
		    if(mp[vt[i]] == 1) res = i + 1 ;
		}
		cout << res << endl ;
	}
}
