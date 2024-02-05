#include <bits/stdc++.h>
using namespace std ;

int n, arr[21], check[21], sets[21], steps = 2 ;
map<int, int> mp ;
vector<vector<int>> res ;

bool cmp(vector<int> a, vector<int> b){
	string x = "", y = "";
    for (int i : a) x += to_string(i) + " ";
    x.pop_back(); // remove the last space
    for (int i : b) y += to_string(i) + " ";
    y.pop_back();
    return x < y;
}

bool isIncreasing(const vector<int> &arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return false;
        }
    }
    return true;
}

void out(int l){
	vector<int> vec;
	for(int i = 1 ; i <= l ; i++) vec.push_back(arr[sets[i]]) ;
	if(isIncreasing(vec)) res.push_back(vec) ;
}

void Try(int i){
	for(int j = sets[i - 1] + 1 ; j <= n ; j++){
		sets[i] = j ;
		if(i == steps) out(i) ;
		else Try(i + 1) ;
	}
}

int main(){
	cin >> n ;
	mp[arr[0]] = 0 ;
	for(int i = 1 ; i <= n ; i++){
		cin >> arr[i] ;
		mp[arr[i]] = i ;
	}
	while(steps <= n){
		Try(1) ;
		steps++ ;
	}
	sort(res.begin(), res.end(), cmp) ;
	for(auto x : res){
		for(int i = 0 ; i < x.size() ; i++) cout << x[i] << " " ;
		cout << endl ;
	}
}
