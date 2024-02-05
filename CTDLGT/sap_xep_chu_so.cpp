#include <iostream>
#include <set>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n; 
		cin >> n ; 
		set<int> st ;
		int arr[n] ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ;
			while(arr[i] > 0)
			{
				st.insert(arr[i] % 10) ;
				arr[i] /= 10 ; 
			}
		}
		for(auto x : st) cout << x << " " ;
		cout << endl ;
	}
}

