#include <iostream>
using namespace std;

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, m = 0, res = 1 ; 
		cin >> n ; 
		int arr[n], tmp[n] ;
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i] ;
			tmp[i] = arr[i] ;
		}
		sort(tmp, tmp + n) ;
		n-- ;
		while(m < n){
			if(arr[m] != tmp[m] && arr[m] != tmp[n]) res = 0 ;
			if(arr[n] != tmp[n] && arr[n] != tmp[m]) res = 0 ;
			m++ ;
			n-- ;
		}
		if(res == 1) cout << "Yes\n" ;
		else cout << "No\n" ;
	}
}

