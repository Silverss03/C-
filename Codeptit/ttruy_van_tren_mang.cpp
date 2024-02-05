#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int num, q ;
	cin >> num ;
	multiset <int> ms ;
	for(int i = 0 ; i < num ; i++){
		long long tmp ;
		cin >> tmp ;
		ms.insert(tmp) ;
	}	
	cin >> q ;
	while(q--){
		int act, tmp ;
		cin >> act >> tmp;
		if(act == 1){
			ms.insert(tmp) ;
		}
		else if(act == 2){
			auto it = ms.find(tmp) ;
			if(it != ms.end()) ms.erase(it) ;
		}
		else if (act == 3){			
			if(ms.find(tmp) != ms.end()) cout << "YES\n" ;
			else cout << "NO\n" ;
		}
	}
    return 0;
}
