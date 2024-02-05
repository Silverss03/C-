#include <bits/stdc++.h>
using namespace std;

struct line{
	int s, e ;
};

bool cmp(line a, line b){
	return a.e < b.e ;
}

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, curr, res = 1 ;
		cin >> n ;
		line arr[n] ;
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i].s >> arr[i].e ;
		}	
		sort(arr, arr + n, cmp) ;
		curr = arr[0].e ;
		for(int i = 1 ; i < n ; i++)
		{
			if(arr[i].s >= curr)
			{
				res++ ;
				curr = arr[i].e ;
			}
		}
		cout << res << endl ;
	}
}

