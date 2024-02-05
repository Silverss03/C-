#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int n ; 
int arr[10][10], check[10][10] ;
vector <string> vt ;

bool cmp(string a, string b)
{
	return a < b ;
}

void Try(int r, int c, string res)
{
	check[r][c] = 1 ;
	if(r == n && c == n)
	{
		vt.push_back(res) ;
		return ;
	}
	else
	{
		if( r < n && arr[r + 1][c] == 1 &&  check[r + 1][c] == 0)
		{
			Try(r + 1, c, res + "D") ;
			check[r + 1][c] = 0 ;
		}
		if( c < n && arr[r][c + 1] == 1 && check[r][c + 1] == 0)
		{
			Try(r, c + 1, res + "R") ;
			check[r][c + 1] = 0 ;
		}
		if( c >= 1 && arr[r][c - 1] == 1 && check[r][c - 1] == 0 )
		{
			Try(r, c - 1, res + "L") ;
			check[r][c - 1] = 0 ;
		}
		if( r >= 1 && arr[r - 1][c] == 1 && check[r - 1][c] == 0 )
		{
			Try(r - 1, c, res + "U") ;
			check[r - 1][c] = 0 ;
		}
	}
}

int main()
{
	int tests ;
	cin >> tests ; 
	while(tests--)
	{
		vt.clear() ;
		cin >> n ; 
		memset(check, 0 , sizeof(check)) ;
		for(int i = 1 ; i <= n ; i++)
		{
			for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
		}
		Try(1,1, "") ;
		if(vt.size() == 0 || arr[1][1] == 0 && arr[n][n] == 0)
			cout << "-1\n" ;
		else 
		{
			sort(vt.begin(), vt.end(), cmp ) ;
			for(auto x : vt) cout << x << " " ;
			cout << endl ;
		}
	}
}

