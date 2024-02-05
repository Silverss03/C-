#include <bits/stdc++.h>
using namespace std ;

int check(char arr[], int start, int end){
	int l = start , r = end  - 1;
	while(l < r){
		if(arr[l] != arr[r]) return 0 ;
		l++ ;
		r-- ;
	}
	return 1 ;
}

int main(){
	fstream fin("sample.txt", ios::in) ;
	fstream fout("output.txt", ios::out) ;
	int tests ;
	fin >> tests ;
	string S ;
	while(tests--){
		fin >> S ;
		int n = S.size(), i = 0, res = 0 ;
		while(i < n){
			char arr[100000], c = 0, s = 0 ;
			while(S[i] >= '0' && S[i] <= '9'){
				arr[c++] = S[i] ;
				i++ ;
			}
			while(arr[s] == '0' && s < c){
				s++ ;
			}
			if(check(arr, s, c) && c > 0){
				res = 1 ;
				for(int j = 0 ; j < c ; j++) fout << arr[j] ;
				fout << " " ; 
			}
			i++ ;
		}
		if(res == 0) fout << "-1"  ;
		fout << endl ;
	}
	fin.close() ;
	fout.close() ;
}
