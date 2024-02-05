#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

map <string, int> mp ; 

int n ;
int can_construct(vector<string> &vt, string s, map <string, int> &mp)
{
	if(mp.find(s) != mp.end()) return mp[s] ;
	if(s == "") return 1 ; 
	int res = 0 ; 
	for(int i = 0 ; i < n ; i++)
	{
		if(s.find(vt[i]) == 0)
		{
			string remain = s.substr(vt[i].length()) ;
			res += can_construct(vt, remain, mp) ;
			mp[s] = res ; 
		}
	}
	mp[s] = res; 
	return res ;
}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		mp.clear() ;
		string s ;
		cin >> n >> s ; 
		vector<string> vt ;
		for(int i = 0 ; i < n ; i++)
		{
			string tmp ;
			cin >> tmp ; 
			vt.push_back(tmp) ; 
		}
		cout <<can_construct(vt, s, mp) << endl ;
	}
}

