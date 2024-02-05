#include <iostream>
using namespace std;

const long long modulo = 1e9 + 7 ;
long long n, k ;
long long proto[12][12] ;

void mul(long long A[12][12], long long B[12][12])
{
	long long tmp[12][12] ;
	for(long long i = 0 ; i < n ; i++)
	{
		for(long long j = 0 ; j < n ; j++)
		{
			tmp[i][j] = 0 ;
			for(long long k = 0 ; k < n ; k++)
			{
				tmp[i][j] += A[i][k] * B[k][j]; 
				tmp[i][j] %= modulo ;
			}
		}	
	}	
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
			A[i][j] = tmp[i][j] ;
	}
}

void power(long long arr[12][12], long long k)
{
	if(k == 1) return ; 
	if(k % 2 == 1)
	{
		power(arr, k/2) ;
		mul(arr, arr) ;
		mul(arr, proto) ;
	}	
	else if(k % 2 == 0)
	{
		power(arr, k/2) ;
		mul(arr, arr) ;
	}
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		cin >> n >> k ;
		long long arr[12][12] ;
		for(int i = 0 ; i < n ; i++)
		{
			for(int j = 0 ; j < n ; j++) 
			{
				cin >> arr[i][j] ;
				proto[i][j] = arr[i][j] ;
			}
		}
		power(arr, k) ;
		for(int i = 0 ; i <n ; i++)
		{
			for(int j = 0 ; j < n ; j++)
				cout << arr[i][j] << " " ;
			cout << endl ;
		}
	}
}

