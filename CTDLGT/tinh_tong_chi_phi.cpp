#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, k, tmp, price = 0 ;
	cin >> n >> k ; 
	priority_queue<long long, vector<long long> , greater<long long>> qu ;
	for(int i = 1 ; i <= n ; i++)
	{
		cin >> tmp ; 
		qu.push(tmp) ;
	}
	while(qu.size() != 1)
	{
		if(qu.size() >= k)
		{
			long long sum = 0, a, b ; 
			for(int i = 0 ; i < k ; i++)
			{
				if(i == 0) a = qu.top() ;
				if(i == k - 1) b = qu.top() ;
				sum += qu.top() ; 
				qu.pop() ; 
			}
			qu.push(sum) ; 
			price += b - a ;
		}
		else
		{
			long long sum = 0, a, b, n = qu.size() ; 
			for(int i = 0 ; i < n ; i++)
			{
				if(i == 0) a = qu.top() ;
				if(i == n - 1) b = qu.top() ;
				sum += qu.top() ; 
				qu.pop() ; 
			}
			qu.push(sum) ; 
			price += b - a ;
		}
	}
	cout << qu.top() << endl << price ;
}

