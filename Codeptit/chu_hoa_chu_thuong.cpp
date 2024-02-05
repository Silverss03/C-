#include <iostream>
#include <cstring>
using namespace std ;

int main(){
	int tests; 
	cin >> tests; 
	while(tests--){
		char inp ; 
		cin >> inp ;
		if(inp >= 'a' && inp <= 'z') inp -= 32 ;
		else inp += 32 ;
		cout << inp << endl ;
	}
}
