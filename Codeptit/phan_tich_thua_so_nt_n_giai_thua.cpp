#include <bits/stdc++.h>
using namespace std ;

map <int,int> mp ;

void extract(int num){
	while(num % 2 == 0){
		num /= 2 ;
		mp[2]++ ;
	}
	for(int i = 3 ; i <= sqrt(num) ; i+= 2){
		while(num % i == 0){
			num /= i ;
			mp[i]++ ;
		}
	}
	if(num > 2) mp[num]++ ;
}

int main(){
	int num ;
	cin >> num ;
	string res = "" ;
	for(int i = 2 ; i <= num ; i++) extract(i) ;
	for(auto x : mp){
		res = res + to_string(x.first) + "^" + to_string(x.second) + " * " ;
	}
	res.erase(res.length() - 2) ;
	cout << res ;
}
