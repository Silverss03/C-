#include <iostream>
#include <vector>
using namespace std ;

long long n, res = 0 ;

void merge(vector<long long> &arr, long long s, long long e, long long m)
{
	vector<long long> left(arr.begin() + s , arr.begin() + m + 1) ;
	vector<long long> right(arr.begin() + m + 1, arr.begin() + e + 1) ;
	
	int i = 0, j = 0, k = s ;
	while(i < left.size() && j < right.size() )
	{
		if(left[i] <= right[j])
		{
			arr[k++] = left[i++] ;
		}
		else
		{
			res += m - s - i + 1 ;
			arr[k++] = right[j++] ;
		}
	}
	
	while(i < left.size())
	{
		arr[k++] = left[i++] ;
	}	
	
	while(j < right.size())
	{
		arr[k++] = right[j++] ;
	}
}

void mergesort(vector<long long> &arr, long long s, long long e)
{
	if(s < e)
	{
		long long mid = (e + s)/2 ;
		mergesort(arr, s, mid ) ; 
		mergesort(arr, mid + 1, e) ;
		merge(arr, s, e, mid) ;
	}
}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		res = 0 ;
		cin >> n ; 
		vector<long long> arr(n) ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ;
		}
		
		mergesort(arr, 0, n - 1) ;
		cout << res << endl ;
	}
}
