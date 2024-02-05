#include <iostream>
using namespace std ; 

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int idx ;
		cin >> idx ;
		string s, res = "" ;
		cin >> s ; 
		if(s.length() == 1)
		{
			res += s ;
		}
		else
		{
			int i = s.length() - 1;
			while(i >= 0 && s[i] <= s[i - 1]) i-- ;
			if(i == 0)
			{
				res += "BIGGEST" ;
			}
			else
			{
				i-- ;
			    int j = s.length() - 1 ;
			    while(j >= 0 && s[j] <= s[i]) j-- ;
			    swap(s[i], s[j]) ;
			    int l = i + 1, r = s.length() - 1 ;
			    while(l <= r)
			    {
			    	swap(s[l], s[r]) ;
			    	l++ ; 
			    	r-- ;
				}
				res += s ;
			}
		}
		cout << idx << " " << res << endl ;
	}
}
