#include <iostream>
#include <stack>
#include <map>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, inc[100002], arr[100002], dec[100002] ;
		cin >> n ;
		stack <int> val, pos ;
		
		for(int i = 1 ; i <= n ; i++)
		{
			cin >> arr[i] ;
		}
		
		for(int i = n ; i >= 1 ; i--)
		{
			while(!val.empty() && val.top() <= arr[i])
			{
				val.pop() ;
				pos.pop() ;
			}
			if(val.empty())
			{
				inc[i] = -1  ;
			}
			else
			{
				inc[i] = pos.top() ;
			}
			val.push(arr[i]) ;
			pos.push(i) ;  
		}
		
		cout << endl ;
		while(!val.empty())
		{
			val.pop() ;
		}
		
		while(!pos.empty())
		{
			pos.pop() ;
		}
		
		for(int i = n ; i >= 1 ; i--)
		{
			while(!val.empty() && val.top() >= arr[i])
			{
				val.pop() ;
				pos.pop() ;
			}
			
			if(val.empty())
			{
				dec[i] = -1 ;
			}
			else
			{
				dec[i] = pos.top() ;
			}
			val.push(arr[i]) ; 
			pos.push(i) ; 
		}
		
		
		for(int i = 1 ; i <= n ; i++)
		{
			if(inc[i] != -1 && dec[inc[i]] != -1) cout << arr[dec[inc[i]]]  << " " ;
			else cout << -1 << " " ;
		}
		cout << endl ;
	}
}

