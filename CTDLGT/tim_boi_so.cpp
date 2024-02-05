#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n ; 
		cin >> n ; 
		queue<long long> qu ;
		qu.push(9) ;
		while(1)
		{
			long long tmp = qu.front() ;
			qu.pop() ;
			if(tmp % n == 0)
			{
				cout << tmp << endl ;
				break ;
			}
			qu.push(tmp * 10) ;
			qu.push(tmp * 10 + 9) ;
		}
	}
}

