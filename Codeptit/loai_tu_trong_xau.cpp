#include<bits/stdc++.h> 
using namespace std; 

int main(){ 
	string inp , del; 
	getline(cin,inp); 
	getline(cin,del); 
	size_t pos; 
	int len = del.length(); 
	do{ 
		pos = inp.find(del); 
		if(pos == -1) break; 
		inp.erase(pos,len); 
	} while(true); 
	for(int i = 0; i < inp.size();i++){ cout<<inp[i]; } 
}
