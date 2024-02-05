#include <iostream>
#include <vector>
using namespace std;

vector<string> gray_generate(int n)
{
	if(n <= 0) return {"0"} ;
	if(n <= 1) return {"0", "1"} ;
	vector<string> tmp = gray_generate(n - 1) ;
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
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		string s, res = "" ;
		cin >> s; 
		int n = s.length(), pos = 0 ; 
		for(int i = 0 ; i < n ; i++)
		{
			res += "0" ;
		}
		vector<string> gray = gray_generate(n);
		for(int i = 0 ; i < gray.size() ; i++)
		{
			if(gray[i] == s)
			{
				pos = i ;
				break ;
			}
		}
		while(pos--)
		{
			int i = n - 1; 
			while(i >= 0 && res[i] == '1') i-- ;
			res[i] = '1' ;
			for(int j = i + 1 ; j < n ; j++) res[j] = '0' ;
		}
		cout << res << endl ;
	}
}

