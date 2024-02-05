#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int modulo = 1e9 + 7 ;
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		long long n, res = 0 ;
		cin >> n ;
		priority_queue <long long, vector<long long>, greater<long long>> qu ;
		vector <int> vt(n) ;
		for(int i = 0 ; i < n ; i++) 
		{
			cin >> vt[i] ;
			qu.push(vt[i]) ; 
		} 
		while(qu.size() != 1) 
		{
			long long tmp = qu.top() ;
			qu.pop() ;
			tmp += qu.top() ;
			tmp %= modulo ;
			qu.pop() ;
			qu.push(tmp) ;
			res += tmp ; 
		}
		cout << res % modulo << endl ;
	}
}

