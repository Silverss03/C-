#include <iostream>
#include <stack>
#include <map>
#include <cstring>
using namespace std;

int n, start, arr[50][50], check[100], d = 0, test = 0 ;
map <int,int> mp ;

void Try(int i)
{
	check[i] = 1; 
	d++ ;
	for(int j = 1 ; j <= n ; j++)
	{
		if(check[j] == 0 && arr[i][j] == 1)
		{
			Try(j) ;
		}
	}
}
void stack_DFS_tree(int i)
{
	stack<int> st ;
	st.push(i) ;
	check[i] = 1 ;
	while(!st.empty())
	{
		int tmp = st.top() ;
		st.pop() ;
		for(int j = 1 ; j <= n ; j++)
		{
			if(check[j] == 0 && arr[tmp][j] == 1)
			{
				cout << tmp << " " << j << endl ;
				check[j] = 1 ;
				st.push(tmp) ;
				st.push(j) ; 
				break ;
			}
		}
	}
}

int main()
{
	cin >> n >> start ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++) cin >> arr[i][j] ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		d = 0;
		Try(i) ;
		if(d != n)
		{
			test = 1 ;
			break ;
		}
		memset(check, 0, sizeof(check)) ;
	}
	if(test == 1)
	{
		cout << "No spanning tree\n" ;
	}
	else
	{
		memset(check, 0, sizeof(check)) ;
		cout << "Stack DFS tree\n" ;
		stack_DFS_tree(start) ;
	}
	
}

