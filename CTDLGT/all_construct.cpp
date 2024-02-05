#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<string, vector<string>> mp ;
int n;
vector<vector<string>> all_construct(vector <string> &vt, string s, map<string, vector<string>> mp)
{
	if(s == "") return {{}} ;
	vector<vector<string>> res ; 
	for(int i = 0 ; i < n ; i++)
	{
		if(s.find(vt[i]) == 0 )
		{
			string remain = s.substr(vt[i].length()) ;
			vector<vector<string>> ways = all_construct(vt, remain, mp) ;
			for(int j = 0 ; j < ways.size() ; j++ )
			{
				ways[j].insert(ways[j].begin() , vt[i]) ; 
				res.push_back(ways[j]) ; 
			}
		}
	}
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
		vector<vector<string>> res =  all_construct(vt, s, mp) ;
		for(auto x : res)
		{
	        cout << "[";
	        for (int i = 0; i < x.size(); i++) {
	            cout << x[i];
	            if (i != x.size() - 1) {
	                cout << ",";
	            }
	        }
	        cout << "]" << endl;
		}
	}
}

