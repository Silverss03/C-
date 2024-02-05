#include <iostream>
#include <queue>
#include <cstring>
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

void Tree_BFS(int i)
{
	queue <int> qu ;
	check[i] = 1 ;
	qu.push(i) ;
	while(!qu.empty())
	{
		int tmp = qu.front() ;
		qu.pop() ;
		for(int j = 1 ; j <= n ; j++)
		{
			if(arr[tmp][j] == 1 && check[j] == 0)
			{
				cout << tmp << " " << j << endl ;
				qu.push(j) ;
				check[j] = 1 ; 
			}
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
	memset(check, 0, sizeof(check)) ;
	cout << "BFS tree\n" ;
	Tree_BFS(start) ;
}

