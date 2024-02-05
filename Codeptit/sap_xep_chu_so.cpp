#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ; 
	cin >> tests ;
	cin.ignore() ;
	while(tests--){
		int num, res[10] = {0}, count[10], c = 0 ; 
		cin >> num ; 
		cin.ignore() ;
		string inp ;
		getline(cin, inp) ;
		int len = inp.length() ;
		for(int i = 0 ; i < len ; i++){
			if(inp[i] == ' ') continue ;
			res[(int)(inp[i] - 48)]++ ;
			if(res[(int)(inp[i] - 48)] == 1){
				count[c++] = (int)(inp[i] - 48) ;
			}
		}
		sort(count , count + c) ;
		for(int i = 0 ; i < c ; i++){
			cout << count[i] << " " ;
		}
		cout << endl ;
	}
}
