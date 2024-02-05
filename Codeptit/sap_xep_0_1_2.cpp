#include <bits/stdc++.h>
using namespace std ;


int main ()
{
	int tests ; 
	cin >> tests ; 
	while(tests--){
		int len ;
		cin >> len ;
		int *p = new int[len];
		for(int i = 0 ; i < len ; i++) cin >> p[i] ;
		sort (p, p + len);
		for (int i = 0; i < len; i++) cout << p[i] << " ";
		delete[] p ;
		out << endl ;
	}

}
