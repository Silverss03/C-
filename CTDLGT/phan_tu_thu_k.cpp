#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int m, n, k, tmp ;
vector<int> arr ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		arr.clear() ;
		cin >> m >> n >> k ;
		for(int i = 0 ; i < m + n; i++){
			cin >> tmp ;
			arr.push_back(tmp) ;
		}
		sort(arr.begin(), arr.end()) ;
		cout << arr[k - 1] << endl ;
	}
}
