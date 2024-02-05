#include <bits/stdc++.h>
using namespace std ;

int main(){
	fstream fin("PTITi.txt", ios::in) ;
	fstream fout("PTITo.txt", ios::out) ;
	string inp ;
	while(fin >> inp){
		fout << inp << endl ;
	}
	fin.close() ;
	fout.close() ;
}
