#include <iostream>
#include <algorithm>
using namespace std;

struct jobs
{
	int id, dl, profit ;
};

bool cmp(jobs a, jobs b)
{
	return a.profit > b.profit ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n, res = 0, count = 0 ;
		cin >> n ; 
		jobs arr[n] ;
		int times[1001] = {0};
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i].id ;
			cin >> arr[i].dl ;
			cin >> arr[i].profit ;
		}
		sort(arr, arr + n, cmp) ;
		for(int i = 0 ; i< n ; i++)
		{
			while(times[arr[i].dl] == 1 && arr[i].dl > 0) arr[i].dl-- ;
			if(times[arr[i].dl] == 0 && arr[i].dl > 0)
			{
				count++ ; 
				res += arr[i].profit ;
				times[arr[i].dl] = 1; 
			}
		}
		cout << count << " " << res << endl ;
	}
}

