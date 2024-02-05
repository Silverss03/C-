#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

struct num{
	int times, value ;
};

bool cmp(num a,  num b)
{
	if(a.times == b.times ) return a.value < b.value ;
	else return a.times > b.times ;	
}

int main()
{
	int tests; 
	cin >> tests ;
	while(tests--)
	{
		int n ; 
		cin >> n ; 
		num arr[n] ;
		map<int, int> mp ;
		for(int i = 0 ; i < n ; i++) 
		{
			cin >> arr[i].value ;
			mp[arr[i].value]++ ; 
		}
		for(int i = 0 ; i < n ; i++) arr[i].times = mp[arr[i].value] ;
		sort(arr, arr + n , cmp) ; 
		for(num x : arr) cout << x.value << " " ; 
		cout << endl ;
	}
}

