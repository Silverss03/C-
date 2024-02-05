#include <bits/stdc++.h>

using namespace std ;

int final = 0;

void init(vector <int> &answer, int num){
	for(int i = 0 ; i < num ; i++){
		answer.push_back(0) ;
	}
}

void act(vector <int> &answer, int num){
	int i = num - 1 ;
	while(i >= 0 && answer[i] == 1){
		answer[i] = 0 ;
		i-- ;
	}
	if(i < 0){
		final = 1 ;
		return ;
	}
	answer[i] = 1 ;
}

int main(){
	int num , sum, res = 0 ;
	cin >> num >> sum ;
	vector<int> store, answer ;
	for(int i = 0 ; i < num ; i++){
		int tmp ;
		cin >> tmp ;
		store.push_back(tmp) ;
	}
	init(answer, num) ;
	while(final == 0){
		act(answer, num) ;
		int tmp = 0 ;
		for(int i = 0 ; i < num ; i++){
			if(answer[i] == 1) tmp += store[i] ;
		}
		if(tmp == sum){
			res++ ;
			for(int i = 0 ; i < num ; i++){
				if(answer[i] == 1) cout << store[i] << " ";
			}
			cout << endl ;
		}
	}
	cout << res ;
}

