#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,tmp, res = 0, inc = 0 ; 
	cin >> n ; 
	int vt[n] ;
	for(int i = 0 ; i < n ; i++){
		cin >> tmp ;
		vt[tmp] = i + 1 ;
	}
	for(int i = 1 ; i < n ; i++){
		inc++ ;
		if(vt[i + 1] < vt[i]){
			res = max(res,inc) ;
			inc = 0 ;
		}
	}
	cout << n - res ;
}


