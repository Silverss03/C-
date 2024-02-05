#include <iostream>
#include <vector>

using namespace std ;

struct graph
{
	int start, end, val ;
};

int n, start, label[100], path[100] ;
vector<graph> arr ;

void Bellman_Ford(int i)
{
	for(int j = 0 ; j < arr.size() ; j++)
	{
		if(arr[j].start == i)
		{
			label[arr[j].end] = arr[j].val ;
			path[arr[j].end] = i ;
		}	
	}
		
	label[i] = 0 ;
	
	for(int j = 1; j <= n - 2; j++)
	{
		for(int k = 1 ; k <= n ; k++)
		{
			if(k != i)
			{
				for(int i = 0 ; i < arr.size() ; i++)
				{
					if(arr[i].end == k && label[k] > label[arr[i].start] + arr[i].val)
					{
						label[k] = label[arr[i].start] + arr[i].val ;
						path[k] = arr[i].start ;
					}
				}
			}
		}
	}
}

int main()
{
	cin >> n >> start ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1; j <= n ; j++)
		{
			int tmp ;
			cin >> tmp ;
			if(tmp != 0)
			{
				graph a ;
				a.start = i ; 
				a.end = j ;
				a.val = tmp ;
				arr.push_back(a) ; 
			}
		}
	}
	
	for(int i = 1 ; i <= n ; i++)
	{
		label[i] = 10e8 ;
	}
	
	Bellman_Ford(start) ;
	
	for(int i = 1 ; i <= n ; i++)
	{
		if(label[i] != 10e8)
		{
			cout << "K/c " << start << " -> " << i << " = " << label[i] << ";       " ;
			if(i == start)
			{
				cout << i << " <- " << start << endl ;
			}
			else
			{
				int tmp = i ; 
				vector<int> res ;
				while(tmp != start)
				{
					res.push_back(tmp) ;
					tmp = path[tmp] ; 
				}
				
				for(int j = 0 ; j < res.size() ; j++)
				{
					cout << res[j] << " <- " ;
				}
				cout << start << endl ;
				
			}
		}
		else
			cout << "K/c " << start << " -> " << i << " = " << "INF;\n" ;
	}
}
