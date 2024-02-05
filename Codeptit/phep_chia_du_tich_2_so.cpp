#include <bits/stdc++.h>
using namespace std ;

long long int add(long long int x, long long int y, long long int p){
	if(y == 0) return 0 ;
	long long int a = add(x,y/2,p) ;
	if(y% 2 == 0) return (2*(a%p)) % p ;
	else return (x%p + 2*(a%p)) % p ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		long long int x, y , p ;
		cin >> x >> y >> p ;
		cout << add(x,y,p) << endl ;
	}
}

