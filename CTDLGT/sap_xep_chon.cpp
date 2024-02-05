#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, step = 1 ; 
	cin >> n ; 
	vector<int> vt1(n), vt2(n) ;
	for(int i = 0 ; i < n ; i++)
		cin >> vt1[i] ;
	for(int i = 0 ; i < n - 1 ; i++)
	{
		int pos = i;
		for(int j = i + 1 ; j < n ; j++)
		{
			if(vt1[j] < vt1[pos]) pos = j ; 
		}
		swap(vt1[i], vt1[pos]) ;
		cout << "Buoc " << step << ": " ;
		for(auto x : vt1) cout << x << " " ;
		cout << endl ;
		step++ ;
	}
}

