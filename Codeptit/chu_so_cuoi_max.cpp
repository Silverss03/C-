#include <bits/stdc++.h>
using namespace std ;

int maxn = 10000000 ;
int *arr = new int[10000001] ;
void check(){
	for(int i = 2 ; i <= maxn ; i++) arr[i] = 1 ;
	for(int i = 2; i <= sqrt(maxn) ; i++){
		if(arr[i]){
			for(int j = i * i ; j <= maxn ; j += i) arr[j] = 0 ;
		}
	}
}

int check_l(int num){
	int c = num % 10 ;
	num /= 10 ;
	while(num > 0){
		int tmp = num % 10 ; 
		if(c < tmp) return 0 ;
		num /= 10 ;
	}
	return 1 ;
}
int main(){
	int num, res = 0 ; 
	cin >> num ;
	check() ;
	if(num >= 2){
		cout << "2 " ;
		res = 1 ;
	}
	for(int i = 3 ; i <= num; i += 2){
		if(check_l(i) == 1 && arr[i]){
			cout << i << " " ;
			res++ ;
		}
	}
	cout << endl << res ;
}
