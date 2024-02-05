#include <iostream>
#include <cstring>
using namespace std;

int arr[100][100] , check[100], num, connect = 0  ;

bool DFS(int i, int &connect)
{
	connect++ ;
	check[i] = 1 ;
	for(int j = 1 ; j <= num ; j++)
		if(check[j] == 0 && arr[i][j] == 1) DFS(j, connect) ;
}

int main()
{
	int res = 1 ;
	cin >> num ; 
	for(int i = 1 ; i <= num ; i++)
		for(int j = 1 ; j <= num ; j++) cin >> arr[i][j] ; 
	for(int i = 1 ; i <= num ; i++)
	{
		connect = 0 ;
		DFS(i, connect) ; 
		memset(check, 0, sizeof(check)) ;
		if(connect != num)
		{
			res = 0 ;
			break ;
		}
	}
		
	if(res == 1)
		cout << "strongly connected" ;
	else 
		cout << "not strongly connected" ;
}

