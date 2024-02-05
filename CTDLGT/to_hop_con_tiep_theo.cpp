#include <bits/stdc++.h>
using namespace std;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, k, res = 0 ;
		cin >> n >> k ;
		int i = k - 1 ;
		vector<int> arr ;
		map<int,int> mp ;
		for(int j = 0 ; j < k ; j++){
			int tmp ;
			cin >> tmp ;
			arr.push_back(tmp) ;
			mp[tmp]++ ;
		}
		while( i >= 0 && arr[i] == n - k + i + 1) i-- ;
		if(i < 0){
			cout << k << endl ;
		}
		else{
			arr[i]++ ;
			for(int j = i + 1 ; j < k ; j++){
				arr[j] = arr[j - 1] + 1 ;
			}
			for(int j = 0 ; j < k ; j++){
				mp[arr[j]]++ ;
			}
			for(auto x : mp){
				if(x.second == 1 && find(arr.begin(),arr.end(), x.first) != arr.end()) res++ ;
			}
			cout << res << endl ;
		}
	}
}
