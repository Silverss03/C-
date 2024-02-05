#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		long long num, a = 0 , b = 0 ;
		cin >> num ;
		int arr[num] ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i] ;
		sort(arr, arr + num) ;
		for(int i = 0 ; i < num ; i++){
			if(i % 2 == 0) a = a * 10 + arr[i] ;
			else b = b * 10 + arr[i] ;
		}
		cout << a + b << endl ;
	}
}

