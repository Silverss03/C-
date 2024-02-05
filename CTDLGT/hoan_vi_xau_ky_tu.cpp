#include <bits/stdc++.h>
using namespace std ;

int n, arr[12], check[12] ;
string s ;

void act(int i)
{
	for(int j = 0 ; j < n ; j++)
	{
		if(check[j] == 0)
		{
			check[j] = 1 ;
			arr[i] = j ;
			if(i == n)
			{
				for(int k = 1 ; k <= n ; k++) cout << s[arr[k]] ;
				cout << " " ;
			}
			else
			{
				act(i + 1) ;
			}
			check[j] = 0 ;
		}
	}
}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		memset(check, 0 ,sizeof(check)) ;
		cin >> s ;
		n = s.length() ;
		act(1) ;
		cout << endl ;
	}
}
