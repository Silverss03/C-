#include <bits/stdc++.h>
using namespace std ;

int main(){
	string inp ;
	getline(cin, inp) ;
	int len = inp.length() ;
	for(int i = 0 ; i < len ; i++){
		if(inp[i] == 'A' || inp[i] == 'E' || inp[i] == 'I' || inp[i] == 'O' || inp[i] == 'U' || inp[i] == 'Y' || inp[i] == 'a' || inp[i] == 'e' || inp[i] == 'i' || inp[i] == 'o' || inp[i] == 'u' || inp[i] == 'y') continue ;
		cout << "." << (char)(tolower(inp[i]));
	}
}
