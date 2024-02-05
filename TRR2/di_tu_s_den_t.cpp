#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int check[100], arr[100][100], start, des, n, y_n = 0 ;
void DFS(int i, vector<int> res)
{
	res.push_back(i) ; 
	if(i == des) 
	{
		y_n = 1;
		cout << "DFS path: " ;
		int tmp = res.size() ;
		for(int k = tmp - 1 ; k >= 0 ; k--) cout << res[k] << " " ; 
		cout << endl ;
		return ;
	}
	check[i] = 1 ;
	for(int j = 1 ; j <= n ; j++)
	{
		if(check[j] == 0 && arr[i][j] == 1) DFS(j, res) ;
	}
}

void BFS(int i, vector <int> res)
{
	queue <int> qu ; 
	check[i] = 1 ; 
	qu.push(i) ; 
	while(!qu.empty() )
	{
		int tmp = qu.front() ;
		qu.pop() ;
		res.push_back(tmp) ;
		if(tmp == des) 
		{
			y_n = 1 ;
			cout << "BFS path: " ;
			int tmp = res.size() ;
			for(int k = tmp - 1 ; k >= 0 ; k--) cout << res[k] << " " ; 
			return ;
		}
		for(int j = n ; j >= 1 ; j--)
		{
			if(check[j] == 0 && arr[tmp][j] == 1)
			{
				qu.push(j) ;  
				check[j] = 1;
				break ;
			}
		}
	}
}
int main()
{
	cin >> n ;
	cin >> start >> des ; 
	vector<int> res ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
	}
	DFS(start, res) ;
	memset(check, 0, sizeof(check)) ;
	res.clear() ;
	if(y_n == 0) cout << "no path" ;
	BFS(start, res) ;
}

