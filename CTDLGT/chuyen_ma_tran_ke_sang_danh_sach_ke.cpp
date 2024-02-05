#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, tmp ; 
	cin >> n ;
	vector<int> List[1002] ;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			cin >> tmp ;
			if(tmp == 1)
			{
				List[i].push_back(j) ;
			}
		}
	}
	for(int i = 1; i <= n ; i++)
	{
		for(auto x : List[i])
		{
			cout << x << " " ;
		}
		cout << endl ;
	}
}

