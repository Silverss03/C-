#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int n ;
	cin >> n ; 
	vector<int> vec ;
	set<long long> res ;
	for(int i = 0 ; i < n ; i++){
		int tmp ;
		cin >> tmp ;
		vec.push_back(tmp) ;
	}
	sort(vec.begin() , vec.end() ) ;
	long long a = vec[n - 1] * vec[n - 2] * vec[n - 3], b = vec[n - 1] * vec[n - 2], c = vec[n - 1] * vec[0] * vec[1], d = vec[0] * vec[1] ;
	res.insert(a) ;
	res.insert(b) ;
	res.insert(c) ;
	res.insert(d) ;
	auto it = res.end() ;
	it-- ;
	cout << *it ;
}

