#include <bits/stdc++.h>
using namespace std ;

struct node{
	int s, e, val ;
};

int v, e, d[1002], start ;
vector<node> vt ;


bool neg_cycle(int i){
	d[i] = 0 ;
	for(int j = 0 ; j < v - 1 ; j++){
		for(auto x : vt){
			if(d[x.s] != INT_MAX && d[x.s] + x.val < d[x.e]){
				d[x.e] = d[x.s] + x.val ;
			}
		}
	}
	for(auto x : vt){
		if(d[x.s] != INT_MAX && d[x.s] + x.val < d[x.e]){
			return true ;
		}
	}
	return false;
}

void Bellman_Ford(int i) {
    for(int j = 1 ; j <= v ; j++){
    	d[j] = INT_MAX ; 
	}
    for (auto x : vt) {
        if (x.s == i) {
            d[x.e] = x.val;
        }
    }
    d[i] = 0;

    for (int k = 0; k < v - 1; k++) {
        for(auto x : vt){
        	if(x.s != i){
        		if(d[x.s] != INT_MAX && d[x.e] > d[x.s] + x.val){
        			d[x.e] = d[x.s] + x.val ;
				}
			}
		}
    }
}

int main(){
	int tests ;
	cin >> tests;
	while(tests--){
		memset(d, INT_MAX, sizeof(d)) ;
		vt.clear() ; 
		cin >> v >> e >> start; 
		for(int i = 1 ; i <= e ; i++){
			node tmp ;
			cin >> tmp.s >> tmp.e >> tmp.val ;
			vt.push_back(tmp) ; 
		}
		if(neg_cycle(start)){
			cout << -1  ;
		}
		else{
			Bellman_Ford(start) ;
			for(int i = 1 ; i <= v ; i++){
				if(d[i] != INT_MAX) cout << d[i] << " " ;
				else cout << "INFI " ;
			}
		}
		cout << endl ;
	}
}

