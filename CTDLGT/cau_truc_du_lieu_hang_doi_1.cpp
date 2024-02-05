#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int tests ;
	cin >> tests; 
	while(tests--)
	{
		queue<int> qu ;
		int n ; 
		cin >> n ;
		while(n--)
		{
			int act ;
			cin >> act ;
			if(act == 1)
				cout << qu.size() << endl;
			else if(act == 2)
			{
				if(qu.empty()) cout << "YES\n" ;
				else cout << "NO\n" ;
			}
			else if(act == 3)
			{
				int n ;
				cin >> n ;
				qu.push(n) ;
			}
			else if(act == 4 && !qu.empty())
				qu.pop() ;
			else if(act == 5)
			{
				if(qu.empty()) cout << "-1\n" ;
				else cout << qu.front() << endl;
			}
			else if(act == 6)
			{
				if(qu.empty())
					cout << "-1\n" ;
				else
				{
					int n ;
					vector<int> vt ;
					while(!qu.empty())
					{
						vt.push_back(qu.front()) ;
						n = qu.front() ;
						qu.pop() ;
					}
					cout << n << endl; 
					for(int i = 0 ; i < vt.size(); i++)
					{
						//cout << vt[i] << endl ;
						qu.push(vt[i]) ; 
					}
				}
			}
		}
	}
}

