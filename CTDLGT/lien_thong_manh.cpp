#include <bits/stdc++.h>
using namespace std;

int n, m, check[10002] ;
vector<int> List[10002] ;
stack <int> finished; 

void dfs(int i)
{
	check[i] = 1 ;
	for(int j = 0 ; j < List[i].size() ; j++)
	{
		if(check[List[i][j]] == 0)
		{
			dfs(List[i][j]) ;
		}
	}
	finished.push(i) ; 
}

vector<vector<int>>transgraph()
{
	vector<vector<int>> tranposed;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 0 ; j < List[i].size() ; j++)
		{
			tranposed[j].push_back(i) ; 
		}
	}
	return tranposed ;
}

void dfsTranpose(int i)
{
	check[i] = 1 ; 
	
	for(int j = 0 ; j < List[i].size() ; j++)
	{
		if(check[List[i][j]] == 0)
		{
			dfsTranpose(List[i][j]) ;
		}
	}
}

int count()
{
	for(int i = 1 ; i <= n ; i++)
	{
		if(check[i] == 0)
		{
			dfs(i) ;
		}
	}
	
	memset(check, 0, sizeof(check)) ;
	
	vector<vector<int>> tranposedgraph = transgraph() ;
	
	memset(check, 0, sizeof(check)) ;
	int count = 0 ;
	while(!finished.empty())
	{
		int v = finished.top() ;
		finished.pop() ;
		if(check[v] == 0)
		{
			dfsTranpose(v) ;
			count++ ;
		}
	}
	return count ;
}
int main()
{
	int n, m, connected = 0 ;
	cin >> n >> m ; 
	for(int i = 1 ; i <= m ; i++)
	{
		int x, y ;
		cin >> x >> y ; 
		List[x].push_back(y) ;	
	}	
	
	cout << count() << endl;

}

