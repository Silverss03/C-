#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct tree
{
	int start ;
	int end ;
	int val ;	
};

int n, s, V[100], VH[100], val[100][100], res = 0 ;
vector<tree> graph ;
vector<pair<int,int>> path ;

bool cmp(tree a, tree b)
{
	if(a.val != b.val) return a.val < b.val ;
	else
	{
		if(a.start != b.start) return a.start < b.start ;
		else if(a.start == a.start) return a.end < b.end; 
	}
}

void act()
{
	for(auto x : graph)
	{
		if((VH[x.start] == 1 && V[x.end] == 1) )
		{
			V[x.end] = 0 ;
			VH[x.end] = 1 ;
			pair<int, int> tmp ;
			tmp.first = x.start ;
			tmp.second = x.end ; 
			path.push_back(tmp) ;
			res += x.val ;
			act() ;
		}
		else if(VH[x.end] == 1 && V[x.start] == 1)
		{
			V[x.start] = 0 ;
			VH[x.start] = 1 ;
			pair<int, int> tmp ;
			tmp.first = x.start ;
			tmp.second = x.end ; 
			path.push_back(tmp) ;
			res += x.val ;
			act() ;
		}
	}
}

int main()
{
	cin >> n >> s ;
	VH[s] = 1 ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			cin >> val[i][j] ;
			if(val[i][j] != 0)
			{
				if(i < j)
				{
					tree a;
					V[j] = 1 ;
					V[i] = 1 ;
					a.start = i ;
					a.end = j ;
					a.val = val[i][j] ;
					graph.push_back(a) ;
				}
			}
		}
	}
	V[s] = 0 ;
	sort(graph.begin(), graph.end(), cmp) ;
	/*
	for(auto x : graph)
	{
		cout << x.start << " " << x.end << " " << x.val << endl ;
	}
	*/
	act() ;
	cout << "dH = " << res << endl ;
	for(auto x : path)
	{
		cout << x.first << " " << x.second << endl ;
	} 
	
}

