#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

struct job{
	int s, e ;
};

bool cmp(job a, job b){
	return a.e < b.e ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, res = 1, curr ; 
		cin >> n ; 
		job arr[n] ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i].s ;
		for(int i = 0 ; i < n ; i++) cin >> arr[i].e ;
		sort(arr, arr + n , cmp) ;
		curr = arr[0].e ;
		for(int i = 1 ; i < n ; i++){
			if(arr[i].s >= curr ){
				res++ ;
				curr = arr[i].e ;
			}
		}
		cout << res << endl ;
	}
}

