#include <bits/stdc++.h>
using namespace std ;

int main(){
	int num, sum, res;
	cin >> num >> sum ;
	vector <int> vt;
	map <int,int> mp ;
	for(int i = 0 ; i < num ; i++){
		int tmp ;
		cin >>tmp ;
		vt.push_back(tmp) ; 
		mp[tmp] = sum - tmp ;
	}
	sort(vt.begin(), vt.end()) ;
	for(int i = vt.begin() ; i != vt.end() ; i++) cout << vt[i] ;
}
