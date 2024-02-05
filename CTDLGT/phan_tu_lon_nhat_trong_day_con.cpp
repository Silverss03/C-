#include <iostream>
#include <set>
using namespace std;

int main()
{
	int tests; 
	cin >> tests ; 
	while(tests--)
	{
		long long n , k ; 
		cin >> n >> k ; 
		long long arr[100002] ;
		multiset <long long> st ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ;
		}
		
		for(int i = 0 ; i < k ; i++)
		{
			st.insert(arr[i]) ;
		}
		for(int i = k ; i < n ; i++)
		{
			cout << *st.rbegin() << " " ;
			st.erase(st.find(arr[i - k])) ;
			st.insert(arr[i]) ;
		}
		cout << *st.rbegin() << " " << endl;
	}
}

