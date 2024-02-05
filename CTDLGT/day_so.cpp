#include <bits/stdc++.h>
using namespace std ;

void act(int num, vector<int> vec){
	for(int i = 0 ; i < num ; i++) vec[i] += vec[i + 1];
	if(num != 0){
		cout << '[' ;
		for(int i = 0 ; i < num ; i++){
			if(i != num - 1) cout << vec[i] << " " ;
			else cout << vec[i] ;
		}
		cout << ']' << endl;
		act(num - 1, vec) ;
	}
	else return ;
}

int main(){
	int tests ;
	cin >> tests;
	while(tests--){
		int num, times ;
		cin >> num ;
		times = num ;
		vector <int> vec(num) ;
		for(int i = 0 ; i < num ; i++) cin >> vec[i] ;
		for(int i = 0 ; i < times ; i++){
			cout << '[' ;
			for(int i = 0 ; i < num ; i++){
				if(i != num - 1) cout << vec[i] << " " ;
				else cout << vec[i] ;
				vec[i] += vec[i + 1] ;
			}
			cout << ']' << endl ;
			num-- ;
		}
		cout << endl ;

	}
}
