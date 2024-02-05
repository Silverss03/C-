#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int n, step = 1 ; 
	map<int, vector<int>> mp ;
	cin >> n ; 
	vector<int> vt1(n) ;
	for(int i = 0 ; i < n ; i++)
		cin >> vt1[i] ;
	for(int i = 0 ; i < n - 1 ; i++)
	{
		int pos = i;
		for(int j = i + 1 ; j < n ; j++)
			if(vt1[j] < vt1[pos]) pos = j ; 
		swap(vt1[i], vt1[pos]) ;
		mp[step] = vt1 ;
		step++ ;
	}
	for(int i = n - 1 ; i >= 1 ; i--)
	{
		cout << "Buoc " << i << ": " ;
		for(auto x : mp[i]) cout << x << " " ;
		cout << endl ;
	}
}
