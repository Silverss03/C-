#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s ;
	cin >> s ; 
	int l, r, ans = 1 ;
	cin >> l >> r ;
	while(l <= r)
	{
		if(s[l - 1] != s[r - 1])
		{
			ans = 0 ;
			break ;
		}
	}
	if(ans == 1) cout << "YES\n" ; 
	else cout << "NO\n" ;
}

