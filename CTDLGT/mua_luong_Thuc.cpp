#include <iostream>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, s, m, res = 0, req ;
		cin >> n >> s >> m ; 
		req = s * m ;
		if(n < m || (n*6) < (m*7)) cout << -1 << endl ;
		else{
			while(req > 0){
				res++ ;
				req -= n ;
			}
			if(res <= s) cout << res << endl ;
			else cout << -1 << endl;
		}
	}
}

