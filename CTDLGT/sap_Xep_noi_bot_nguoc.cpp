#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		int n, step = 1 ; 
		cin >> n ; 
		vector <int> arr(n) ; 
		map <int, vector<int>> mp ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		for(int i = 0 ; i < n; i++)
		{
			int s = 0, end = 1 ;
			while(s < n - 1)
			{
				if(arr[s] > arr[s + 1])
				{
					swap(arr[s], arr[s + 1]) ;
					end = 0 ;
				}
				s++ ;
			}
			if(end == 1) break ;
			mp[step] = arr; 
			step++ ; 
		}
		for(int i = step - 1; i > 0 ; i--)
		{
			cout << "Buoc " << i << ": " ;
			for(auto x : mp[i])
			{
				cout << x << " " ;
			}
			cout << endl ;
		}
	}	
}

