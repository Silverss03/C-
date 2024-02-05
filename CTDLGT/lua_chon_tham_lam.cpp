#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int n, s ;
	cin >> n >> s;
	int n1[n], n2[n], s2 = s ;
	if(s <= 0 || s > 9*n)
	{
		cout << "-1 -1" ;
	}
	else
	{
		for(int i = 0 ; i < n ; i++)
		{
			n1[i] = 0 ;
			n1[i] += min(s, 9) ;
			s -= min(s,9) ;
		}
		n2[0] = 1 ;
		s2-- ;
		for(int i = n - 1 ; i >= 0 ; i--)
		{
			if(i != 0) n2[i] = 0 ;
			n2[i] += min(s2, 9) ;
			s2 -= min(s2, 9) ;
			if(s2 == 0) break ;
		}
		for(int i = 0 ; i < n ; i++)
		{
			cout << n2[i] ;
		}
		cout << " " ;
		for(int i = 0;  i < n ; i++)
		{
			cout << n1[i] ;
		}
	}
	
}

