#include <bits/stdc++.h>
using namespace std ;

void act(int num, vector<int> vec){
	for(int i = 0 ; i < num ; i++) vec[i] += vec[i + 1];
	if(num != 0){
		act(num - 1, vec) ;
	}
	else return ;
	cout << '[' ;
	for(int i = 0 ; i < num ; i++){
		if(i != num - 1) cout << vec[i] << " " ;
		else cout << vec[i] ;
	}
	cout << ']' ;
}

int main(){
	int tests ;
	cin >> tests;
	while(tests--){
		int num ;
		cin >> num ;
		vector <int> vec(num) ;
		for(int i = 0 ; i < num ; i++) cin >> vec[i] ;
		act(num - 1, vec) ;
		cout << '[' ;
		for(int i = 0 ; i < num ; i++){
			if(i != num - 1) cout << vec[i] << " " ;
			else cout << vec[i] ;
		}
		cout << ']' << endl ;
	}
}
