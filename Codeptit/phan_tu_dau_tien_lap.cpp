#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, res = -1, c = 0;
		cin >> num ;
		int *count = new int[1000000]{0} ; 
		//for(int i = 0 ;)
		for(int i = 0 ; i < num ; i++){
			int tmp ;
			cin >> tmp ;
			count[tmp]++ ;
			if(count[tmp] > 1 && c == 0){
				res = tmp ;
				c = 1;
			}
		}
		cout << res << endl ;
		delete[] count ;
	}
}
