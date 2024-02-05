#include <bits/stdc++.h>
using namespace std;

int n ;
bool F[1002][1002] ;
int qud(string s)
{
	int n = s.size() , ans = -1e9, i, j ; 
	memset(F, false, sizeof(F)) ;
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		for(int j = i ; j <= n - 1 ; j++)
		{
			if(i == j) F[i][j] = true ; 
			else if(s[i] == s[j])
			{
				if(j - i == 1) F[i][j] = true ;
				else
					F[i][j] = F[i + 1][j - 1] ;
			}
			if(F[i][j]) ans = max(ans, j - i + 1) ;
		}
	}
	return ans ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		string res ;
		cin >> res ;
		cout << qud(res) << endl ;
	}
}

