#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ; 
	while(tests--)
	{
		vector <int> res ;
		int n ; 
		cin >> n ; 
		int arr[n + 1] ;
		stack <int> st ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		res.push_back(-1) ;
		st.push(arr[n - 1]) ;
		for(int i = n - 2 ; i >= 0 ; i--)
		{
			while(st.size() && st.top() <= arr[i])
			{
				st.pop() ;
			}
			if(st.empty()) res.push_back(-1) ;
			else
			{
				res.push_back(st.top()) ; 	
			}
			st.push(arr[i]) ; 
		}  
		for(int i = res.size() - 1 ; i >= 0 ; i--)
		{
			cout << res[i] << " " ;
		}
		cout << endl ;
	}
}

