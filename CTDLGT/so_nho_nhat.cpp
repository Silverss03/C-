#include <iostream>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int s, d ;
		cin >> s >> d ;
		int arr[1002] ;
		int add = 1, index = d - 1, sum = 1  ;
		arr[0] = 1 ;
		for(int i = 1 ; i < d ; i++) arr[i] = 0 ; 
		while(sum < s && index >= 0)
		{
			arr[index]++ ;
			sum++ ;
			if(arr[index] == 9)
			{
				index-- ;
			}
		}
		if(sum < s)
			cout << -1 << endl  ;
		else
		{
			for(int i = 0 ; i < d ; i++) cout << arr[i] ;
			cout << endl ;
		}
	}
}

