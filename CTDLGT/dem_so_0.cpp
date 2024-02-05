#include <iostream>
#include <vector>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int num, res = 0, tmp ;
		cin >> num ;
		vector<int> arr(num) ;
		for(int i = 0 ; i < num ; i++) cin >> arr[i];
		cout << lower_bound(arr.begin(), arr.end(), 1) - arr.begin() << endl ;
	}
}
