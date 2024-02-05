#include <iostream>
using namespace std;
int n, arr[102][102], start, check[102] ;

void Tree_DFS(int i)
{
	check[i] = 1 ;
	for(int j = 1 ; j <= n ; j++)
	{
		if(arr[i][j] == 1 && check[j] == 0)
		{
			cout << i << " " << j << endl ;
			Tree_DFS(j) ;
		}
	}
}

int main()
{
	cin >> n >> start ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1; j <= n ; j++) cin >> arr[i][j] ;
	}
	cout << "DFS tree\n" ;
	Tree_DFS(start) ;
}

