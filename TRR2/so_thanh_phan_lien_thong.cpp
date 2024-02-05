#include <iostream>
using namespace std;

int n, arr[100][100], check[100] ;

void DFS(int i)
{
	check[i] = 1 ;
	for(int j = 1 ; j <= n ; j++)
	{
		if(arr[i][j] == 1 && check[j] == 0)
		{
			DFS(j) ;	
		}
	}
}

int main()
{
	int res = 0 ;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		if(check[i] == 0)
		{
			res++ ;
			DFS(i) ;
		}
	}
	cout << res ;
}

