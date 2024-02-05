#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n ; 
		cin >> n ;
		queue<int> qu ;
		qu.push(9) ;
		while(!qu.empty())
		{
			int x = qu.front() ;
			qu.pop() ;
			if(x % n == 0)
			{
				cout << x << endl ;
				break ;
			}
			qu.push(x * 10) ;
			qu.push(x * 10 + 9) ;
		}
	}
}

