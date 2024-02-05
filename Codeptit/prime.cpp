#include <bits/stdc++.h>
using namespace std ;
int maxn = 10e6 ;
int *arr = new int[10000001];
int *res = new int[10000001] ;

void check(){
    for(int i = 2 ; i <= maxn ; i++) arr[i] = 1 ;
    for(int i = 2 ; i <= sqrt(maxn) ; i++){
        if(arr[i]){
            for(int j = i*i ; j <= maxn ; j += i) arr[j] = 0 ; 
        }
    }
}

int main(){
    int tests, res = 0 ;
    cin >> tests ;
    check() ; 
    for(int i = 2 ; i <= 10e6 ; i++){
    	if(arr[i]) res++ ;
    	res[i] = dem ;
	}
    while(tests--){
        int l, r ;
        cin >> l >> r ;
        cout << res[r] - res[l - 1] << endl ;
    }
    delete[] arr; 
    delete[] res ;
}


