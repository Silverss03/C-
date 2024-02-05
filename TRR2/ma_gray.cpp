#include<iostream>
#include<vector>
using namespace std ;

int n;

vector<string> generate_res( int n)
{
	if(n <= 0) return {"0"} ;
	if(n <= 1) return {"0", "1"} ;
	vector<string> tmp = generate_res(n - 1) ;
	vector<string> res ;
	for(int i = 0 ; i < tmp.size() ; i++)
	{
		res.push_back("0" + tmp[i]) ; 
	}
	for(int i = tmp.size() - 1; i >= 0 ; i--)
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
		cin >> n ; 
		vector<string> res = generate_res(n) ;
		for(auto x : res)
		{
			cout << x << " " ;
		}
		cout << endl ;
	}
}

