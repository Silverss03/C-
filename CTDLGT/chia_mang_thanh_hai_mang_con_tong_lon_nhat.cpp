#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k, tmp, num1 = 0, num2 = 0;
		cin >> n >> k ;
		tmp = n- k ;
		int arr[n] ;
		for(int i = 0 ; i < n ; i ++) cin >> arr[i] ;
		sort(arr, arr+ n ) ;
		if(tmp > k){
			for(int i = 0 ; i < k ; i++) num1 += arr[i] ;
			for(int i = k ; i < n ; i++) num2 += arr[i] ;
			cout << num2 - num1 << endl ;
		}
		else{
			for(int i = 0 ; i < tmp ; i++) num1 += arr[i] ;
			for(int i = tmp ; i < n ; i++) num2 += arr[i] ;
			cout << num2 - num1 << endl ;
		}
	}
}

