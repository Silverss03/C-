#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, answer, res ;
		cin >> num >> answer ;
		for(int i = 1 ; i <= num ;i++){
			int tmp ;
			cin >> tmp ;
			if(tmp == answer) res = i ;
		}
		cout << res << endl ;
	}
}
