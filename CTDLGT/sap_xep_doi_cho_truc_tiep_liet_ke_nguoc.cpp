#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n ; 
		cin >> n ; 
		int arr[n] ; 
		map<int , vector<int>> mp ;
		for(int i = 0 ; i < n; i++) cin >> arr[i] ;
		for(int i = 0 ; i < n - 1; i++)
		{
			for(int j = i + 1 ; j < n ; j++)
			{
				if(arr[i] > arr[j])
				{
					int tmp = arr[i] ;
					arr[i] = arr[j] ;
					arr[j] = tmp ;
					vector <int> vt ; 
					for(int k = 0 ; k < n ; k++)
					{
						vt.push_back(arr[k]) ; 
					}
					mp[i + 1] = vt ;
				}
			}
		}
		for(int i = n - 1 ; i >= 1 ; i--)
		{
			cout << "Buoc " << i << ": " ;
			for(auto x : mp[i]) cout << x << " " ;
			cout << endl ;
		}
	}
}

