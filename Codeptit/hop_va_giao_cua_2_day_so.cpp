#include <bits/stdc++.h>
using namespace std ;

int main(){
	int tests ;
	cin >> tests ;
	while(tests--){
		int n, m, max, c_u = 0, c_i = 0;
		cin >> n >> m ;
		if(n > m) max = n ;
		else max = m ;
		int arr_A[n], arr_B[m],Intersection[max], count[100000] = {0}; 
		int *Union = new int [m + n] ;
		for(int i = 0 ; i < n ; i++){
			cin >> arr_A[i] ;
			count[arr_A[i]]++ ;
			Union[c_u++] = arr_A[i] ;
		}
		for(int i = 0 ; i < m ; i++){
			cin >> arr_B[i] ;
			count[arr_B[i]]++ ;
			if(count[arr_B[i]] == 1) Union[c_u++] = arr_B[i] ;
		}
		sort(Union, Union + c_u) ;
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++) if(arr_A[i] == arr_B[j]) Intersection[c_i++] = arr_A[i] ;
		}
		for(int i = 0 ; i < c_u ; i++) cout << Union[i] << " " ;
		cout << endl ;
		sort(Intersection, Intersection + c_i) ;
		for(int i = 0 ; i < c_i ; i++) cout << Intersection[i] << " " ;
		cout << endl ;
		delete[] Union ;
	}
}
