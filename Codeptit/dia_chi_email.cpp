#include <bits/stdc++.h>
using namespace std ;

int main(){
	string inp ; 
	getline(cin, inp) ;
	char store[100][100] ;
	int l = 0 , r =  0 ;
	for(int i = 0 ; i < inp.length(); i++){
		if((inp[i] >= 'A' && inp[i] <= 'Z') ||(inp[i] >= 'a' && inp[i] <= 'z')) store[l][r++] = inp[i] ;
		else {
			l++ ;
			r = 0 ;
		}
	}
	l++ ;
	for(int i = 0 ; i < r ; i++){
		if(store[l - 1][i] >= 'A' && store[l - 1][i] <= 'Z') store[l - 1][i] += 32 ;
		cout << store[l - 1][i] ;
	}
	for(int i = 0 ; i < l - 1 ; i++){
		if(store[i][0] >= 'A' && store[i][0] <= 'Z') store[i][0] += 32 ;
		cout << store[i][0] ;
	}
	cout << "@ptit.edu.vn" ;
}
