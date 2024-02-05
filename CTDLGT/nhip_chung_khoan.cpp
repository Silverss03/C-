#include <iostream>
#include <stack>
#include <vector>
#include <map>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n ; 
		cin >> n ;
		stack <int> st ;
		int arr[n + 1];
		vector<int> res(n) ;
		map<int, int> mp ;
		for(int i = 0 ; i < n ; i++ ) cin >> arr[i] ;
		res[0] = 1;
		st.push(arr[0]) ;
		mp[arr[0]] = 1 ;
		for(int i = 1 ; i < n ; i++)
		{
			res[i] = 1 ;
			while(st.size() && st.top() <= arr[i])
			{
				res[i] += mp[st.top()] ;
				st.pop() ;
			}
			mp[arr[i]] = res[i] ;
			st.push(arr[i]) ; 
		}
		for(auto x : res)
		{
			cout << x << " " ;
		}
		cout << endl ;
	}
}


