#include <bits/stdc++.h>
using namespace std ;

vector<string> gray_generate(int i)
{
	if(i <= 0) return {"0"} ;
	if(i <= 1) return {"0", "1"} ;
	vector<string> tmp = gray_generate(i - 1) ;
	vector<string> res ; 
	for(int i = 0 ; i < tmp.size() ; i++)
	{
		res.push_back("0" + tmp[i]) ; 
	}
	for(int i = tmp.size() - 1 ; i >= 0 ; i--)
	{
		res.push_back("1" + tmp[i]) ; 
	}
	return res ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n;
		cin >> n ;
		vector<string> vt = gray_generate(n) ;
		for(auto x : vt)
		{
			cout << x << " " ;
		}
		cout << endl ;	
	}
}
