#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tests ;
	cin >> tests; 
	while(tests--)
	{
		int s , t; 
		cin >> s >> t ;
		int arr[20001] = {0} ;
		queue<int> qu ; 
		qu.push(s) ;
		while(arr[t] == 0)
		{
			int x = qu.front() ;
			qu.pop() ;
			if(x - 1 > 0 && arr[x - 1] == 0)
			{
				arr[x - 1] = arr[x] + 1 ;
				qu.push(x - 1) ;
			}
			if(x * 2 < 20000 && arr[x * 2] == 0)
			{
				arr[x * 2] = arr[x] + 1 ;
				qu.push(x * 2) ;
			}
		}
		cout << arr[t] << endl ;
	}
}

