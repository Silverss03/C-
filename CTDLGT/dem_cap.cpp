#include <iostream>
#include <algorithm>
using namespace std;

int act(int x, int Y[], int n, int count[]){
	if(x == 0) return 0 ;
	if(x == 1) return count[0] ;
    int ans = n - (upper_bound(Y, Y + n, x) - Y) ;
	ans = ans + count[0] + count[1] ;
	if(x == 2) ans = ans - count[3] - count[4] ;
	if(x == 3) ans += count[2] ;
	return ans ;
}

long long count_pairs(int X[], int Y[], int n, int count[])
{
	long long res = 0 ;
	for(int i = 0 ; i < n ; i++) res += act(X[i], Y, n, count) ;
	return res ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, m ; 
		cin >> n >> m  ;
		int X[n], Y[m], count[5] = {0} ;
		for(int i = 0 ; i < n ; i++) cin >> X[i] ;
		for(int i = 0 ; i < m ; i++){
			cin >> Y[i] ;
			if(Y[i] < 5) count[Y[i]]++ ;
		}
		sort(Y, Y + n) ;
		cout << count_pairs(X, Y, n, count) << endl; 
	}
}

