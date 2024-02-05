#include <bits/stdc++.h>
using namespace std;

int bin[16], step = 99999;
int arr[5][5] ; 

void bin_generate(int i){
	for(int j = 0 ; j <= 1 ; j++ ){
		bin[i] = j ; 
		if(i == 16){
			int idx = 1, res = 0, c_0 = 0, c_1 = 0  ;
			int tmp[5][5] ;
			for(int k = 0 ; k < 4 ; k++){
				for(int l = 0 ; l < 4 ; l++) tmp[k][l] = arr[k][l] ;
			}
			for(int k = 0 ; k < 4 ; k++){
				for(int l = 0 ; l < 4 ; l++){
					if(bin[idx] == 1){
						res++ ;
						if(tmp[k][l] == 1) tmp[k][l] = 0 ;
						else tmp[k][l] = 1 ;
						if(k - 1 >= 0){
							if(tmp[k - 1][l] == 1) tmp[k - 1][l] = 0 ;
							else tmp[k - 1][l] = 1 ;
						}
						if(k + 1 <= 3){
							if(tmp[k + 1][l] == 1) tmp[k + 1][l] = 0 ;
							else tmp[k + 1][l] = 1 ;
						}
						if(l - 1 >= 0){
							if(tmp[k][l - 1] == 1) tmp[k][l - 1] = 0 ;
							else tmp[k][l - 1] = 1 ;
						}
						if(l + 1 <= 3){
							if(tmp[k][l + 1] == 1) tmp[k][l + 1] = 0 ;
							else tmp[k][l + 1] = 1 ;
						}
						idx++ ;
					}
					else idx++ ;
				}
			}
			for(int k =  0 ; k < 4 ; k++){
				for(int l = 0 ; l < 4 ; l++){
					if(tmp[k][l] == 0) c_0++ ;
					else c_1++ ;
				}
			}
			if(c_0 == 0 || c_1 == 0) step = min(step, res) ;
		}
		else bin_generate(i + 1) ;
	}	
}

int main()
{
	for(int i = 0 ; i < 4 ; i++){
		for(int j = 0 ; j < 4 ; j++){
			char tmp ;
			cin >> tmp ; 
			if(tmp == 'b') arr[i][j] = 1;
			else arr[i][j] = 0 ;
		}
	} 
	memset(bin, 0, sizeof(bin)) ;
	bin_generate(1) ;
	if(step != 99999) cout << step ;
	else cout << -1 ;
}
