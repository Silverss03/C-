#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, res = 2 ; 
		cin >> n ;
		queue<string> qu ;
		vector<string> vt ;
		qu.push("6") ;
		qu.push("8") ;
		while(!qu.empty())
		{
			string tmp = qu.front() ;
			qu.pop() ;
			if(tmp.size() > n)
			{
				break ;
			}
			vt.push_back(tmp) ;
			qu.push(tmp + "6") ;
			qu.push(tmp + "8") ;  
		} 
		cout << vt.size() << endl; 
		for(int i = vt.size() - 1 ; i >= 0 ; i--)
		{
			cout << vt[i] << " " ;
		}
		cout << endl ;
	}
}

