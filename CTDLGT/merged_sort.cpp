#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
	int arr1_s = m - l + 1, arr2_s =  r - m;
	int *arr1 = new int[arr1_s] ;
	int *arr2 = new int[arr2_s] ;
	for(int i = 0 ; i < arr1_s ; i++) arr1[i] = arr[l + i] ;
	for(int i = 0 ; i < arr2_s ; i++) arr2[i] = arr[m + i + 1] ;
	int indexOfArr1 = 0, indexOfArr2 = 0, indexOfMergedArr = l ; 
	while(indexOfArr1 < arr1_s && indexOfArr2 < arr2_s)
	{
		if(arr1[indexOfArr1] <= arr2[indexOfArr2])
		{
			arr[indexOfMergedArr] = arr1[indexOfArr1] ;
			indexOfMergedArr++ ;
			indexOfArr1++ ; 
		}
		else
		{
			arr[indexOfMergedArr] = arr2[indexOfArr2] ;
			indexOfMergedArr++ ;
			indexOfArr2++ ;
		}
	}
	while(indexOfArr1 < arr1_s)
	{
		arr[indexOfMergedArr] = arr1[indexOfArr1] ; 
		indexOfMergedArr++ ;
		indexOfArr1++ ; 
	}
	while(indexOfArr2 < arr2_s)
	{
		arr[indexOfMergedArr] = arr2[indexOfArr2] ;
		indexOfMergedArr++ ;
		indexOfArr2++ ;
	}
	cout << endl ;
	delete[] arr1 ;
	delete[] arr2 ;
}
void mergesort(int arr[], int begin, int end)
{
	if(begin >= end)
	{
		return ; 
	}
	int mid = begin + (end - begin) / 2 ;
	mergesort(arr, begin, mid) ;
	mergesort(arr, mid + 1, end) ;
	merge(arr, begin, mid, end) ;
}

int main()
{
	int tests ; 
	cin >> tests ;
	while(tests--)
	{
		int n ; 
		cin >> n ; 
		int arr[n] ; 
		for(int i = 0; i < n ; i++) cin >> arr[i] ; 
		mergesort(arr, 0, n - 1) ;
		for(int i = 0 ; i < n ; i++) cout << arr[i] << " " ; 
		cout << endl ;
	}
}

