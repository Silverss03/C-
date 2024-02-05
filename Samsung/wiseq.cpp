#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, lim, sum = 0, tmp;
	cin >> n >> lim ;
	vector<long long> vt, ans ;
	
	for(int i = 0 ; i < n ; i++){
		cin >> tmp ;
		vt.push_back(tmp);
	}
	
	if(lim < *min_element(vt.begin(), vt.end())){
		cout << 0;
		return 0;
	}
	
	ans.push_back(vt[0]) ;
	sum += vt[0] ;
	for(int i = 1 ; i < n ; i++){
		if(vt[i] > ans.back()){
			if(sum + vt[i] <= lim){
				sum += vt[i] ;
				ans.push_back(vt[i]) ;
			}
		}
		else if (vt[i] <= ans.back()){
			int pos = lower_bound(ans.begin(), ans.end(), vt[i]) - ans.begin() ;
			sum -= ans[pos] ;
			sum += vt[i] ;
			ans[pos] = vt[i] ;
		}
	}
	cout << ans.size() ;
}

