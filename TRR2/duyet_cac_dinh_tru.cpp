#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int count, check[100], n, arr[15][15] ; ; 
void DFS(int i, int vertex)
{
	check[i] = 1;
	count++ ; 
	for(int j = 1 ; j <= n ; j++)
	{
		if(i != vertex && j != vertex && check[j] == 0 && arr[i][j] == 1 ) DFS(j, vertex) ; 
	}
}
int main()
{
	cin >> n ; 
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
	}
	for(int i = 1 ; i <= n ;i++)
	{
		count = 0 ;
		if(i != 1) DFS(1, i) ;
		else DFS(2, i) ;
		if(count != n - 1)
			cout << i << " " ;
		memset(check, 0, sizeof(check)) ;
	}
}

