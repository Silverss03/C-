#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, step = 1 ; 
	cin >> n ; 
	vector <int> arr(n) ; 
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
		cout << "Buoc " << step << ": " ;
		for(auto x : arr) cout << x << " " ;
		cout << endl ;
		step++ ; 
	}
}

