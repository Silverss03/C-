#include <bits/stdc++.h>
using namespace std;

int F[1002][1002] ;
int qud(string s)
{
	int n = s.length() , ans = 1e9, i, j ; 
	for(int i = n - 2 ; i >= 0 ; i--)
	{
		for(int j = i + 1; j < s.length()  ; j++)
		{
			if(s[i] == s[j]) F[i][j] = F[i + 1][j - 1] ;
			else F[i][j] = min(F[i - 1][j], F[i][j + 1]) + 1 ;
		}
	}
	return F[0][n - 1] ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		memset(F, 0, sizeof(F)) ;
		string res ;
		cin >> res ;
		cout << qud(res) << endl ;
	}
}

