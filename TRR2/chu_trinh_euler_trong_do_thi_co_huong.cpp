#include <iostream>
#include <map>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int v, e, res = 1;
		cin >> v >> e;
		map<int, int> out, in ;
		
		for(int i = 1 ; i <= e ; i++)
		{
			int x, y ;
			cin >> x >> y ;
			out[x]++ ;
			in[y]++ ;
		}
		
		for(int i = 1 ; i <= v ; i++)
		{
			if(out[i] != in[i]) res = 0 ;
		}
		
		if(res == 1) cout << "1\n" ;
		else cout << "0\n" ;
	}
}

