#include <bits/stdc++.h>
using namespace std ;

int main(){
	string inp ;
	getline(cin, inp) ;
	char store[100][100] ;
	int l = 0 , r = 0, len = inp.length() ;
	for(int i = 0 ; i < len ; i++){
		int c = 0 , space = 0 ;
		while((inp[i] >= 'a' && inp[i] <= 'z') || (inp[i] >= 'A' && inp[i] <= 'Z')){
			store[l][r++] = inp[i];
			i++ ;
			space = 1 ;
		}
		for(int j = i ; j < len ; j++) if(inp[j] == ' ') c = 1 ; 
		if(c == 1 && space == 1){
			if(space == 1 && inp[i] == ' ' && inp[i + 1] != ' ') cout << " " ;
			for(int j = 0 ; j < r ; j++){
				if(j == 0 && store[l][j] >= 'a' && store[l][j] <= 'z') store[l][j] -= 32 ;
				else if(j != 0 && store[l][j] >= 'A' && store[l][j] <= 'Z') store[l][j] += 32 ;
				cout << store[l][j] ;
			}
			l++ ;
			r = 0 ;		
		}
	}
	cout << ", " ;
	for(int i = 0 ; i < r ; i++) cout << (char)toupper(store[l][i]) ;
}
