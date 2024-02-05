#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

map <string, bool> mp ; 

int n ;
bool can_construct(vector<string> &vt, string s, map <string, bool> &mp)
{
	if(mp.find(s) != mp.end()) return mp[s] ;
	if(s == "") return true ; 
	for(int i = 0 ; i < n ; i++)
	{
		if(s.find(vt[i]) == 0)
		{
			string remain = s.substr(vt[i].length()) ;
			if(can_construct(vt, remain, mp))
			{
				mp[s] = true ; 
				return true ;
			}
		}
	}
	mp[s] = false; 
	return false ;
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
		if(can_construct(vt, s, mp)) cout << "YES\n"  ;
		else cout << "NO\n" ; 
	}
}

