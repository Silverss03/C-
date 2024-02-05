#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std ;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		string a, b;
		vector<int> vt ;
		int k;
		cin >> k >> a >> b ;
		reverse(a.begin() , a.end() ) ;
		reverse(b.begin() , b.end() ) ;
		int l1 = a.length(), l2 = b.length(), mem = 0, c = 0 ;
		if(l1 > l2)
		{
			for(int i = 0 ; i < l1 ; i++)
			{
				if(i < l2)
				{
					int tmp = (int)(a[i] - '0') + (int)(b[i] - '0') ;
					if(c == 1)
					{
						tmp += mem ;
						c = 0 ;
					}
					if(tmp >= k)
					{
						vt.insert(vt.begin(), tmp % k) ;
						c = 1 ;
						mem = tmp / k ;
					}
					else
						vt.insert(vt.begin(), tmp) ;	
				}
				else
				{
					int tmp = (int)(a[i] - '0') ;
					if(c == 1)
					{
						tmp += mem ;
						c = 0 ;
					}
					if(tmp >= k)
					{
						vt.insert(vt.begin(), tmp % k) ;
						c = 1 ;
						mem = tmp / k ;
					}
					else
						vt.insert(vt.begin(), tmp) ;	
				}
			}
		}
		else
		{
			for(int i = 0 ; i < l2 ; i++)
			{
				if(i < l1)
				{
					int tmp = (int)(a[i] - '0') + (int)(b[i] - '0') ;
					if(c == 1)
					{
						tmp += mem ;
						c = 0 ;
					}
					if(tmp >= k)
					{
						vt.insert(vt.begin(), tmp % k) ;
						c = 1 ;
						mem = tmp / k ;
					}
					else
						vt.insert(vt.begin(), tmp) ;	
				}
				else
				{
					int tmp = (int)(b[i] - '0') ;
					if(c == 1)
					{
						tmp += mem ;
						c = 0 ;
					}
					if(tmp >= k)
					{
						vt.insert(vt.begin(), tmp % k) ;
						c = 1 ;
						mem = tmp / k ;
					}
					else
						vt.insert(vt.begin(), tmp) ;	
				}
			}
		}
		if(c == 1)
		{
			vt.insert(vt.begin() , mem) ; 
			c = 0 ; 
		}
		for(auto x : vt) cout << x ;
		cout << endl ;
	}
}
