#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
	int n ;
	cin >> n ;
	cin.ignore() ;
	vector <int> List[52] ;
	for(int i = 1 ; i <= n ; i++)
	{
		string s ;
		int token ;
		getline(cin, s) ;
		stringstream ss(s) ;
		while(ss >> token)
			List[i].push_back(token) ;
	}
	for(int i = 1 ; i <= n ; i++)
	{
		for(auto x : List[i])
		{
			if(i <= x) cout << i << " " << x << endl ;
		}
	}
}

