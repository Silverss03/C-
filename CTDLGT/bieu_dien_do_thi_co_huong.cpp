#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int v, e ;
		cin >> v >> e; 
		vector<int> List[1002] ;
		for(int i = 1 ; i <= e ; i++)
		{
			int x, y ;
			cin >> x >> y ;
			List[x].push_back(y) ;
		}
		for(int i = 1 ; i <= v ; i++)
		{
			cout << i << ": " ;
			for(auto x : List[i])
			{
				cout << x << " " ;
			}
			cout << endl ;
		}
	}
}

