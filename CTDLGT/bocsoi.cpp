#include <bits/stdc++.h>
using namespace std;

long long n, id[30002], vt[102] ;
int dp[31][31][31][31][31];
const int modulo = 111539786 ;

int get_ID(int x){
	if(id[x] > -1) return id[x] ;
	if(x % 2 == 1) return id[x] = get_ID(x - 1) + 1 ;
	id[x] = get_ID(x/2) + 1 ;
}

long long cal(long long vt[]){
	int i_vt[5];
	for(int i = 0; i < 5; i++){
		i_vt[i] = get_ID(vt[i]);
	}
	if(dp[i_vt[0]][i_vt[1]][i_vt[2]][i_vt[3]][i_vt[4]] > -1) return dp[i_vt[0]][i_vt[1]][i_vt[2]][i_vt[3]][i_vt[4]];
	long long res = 0;
	for(int i = 0; i < n; i++){
		int j = (i + 1) % n;
		if(vt[i] % 2 == 1 && vt[j] % 2 == 1){
			vt[i]--; 
			vt[j]--;
			res = ((res % modulo) + (cal(vt) % modulo)) % modulo;
			vt[i]++; 
			vt[j]++;
		}
		if(vt[i] > 0 && vt[j] > 0){
			if(vt[i] % 2 == 1 && vt[j] % 2 == 1){
				vt[i] /= 2; 
				vt[j] /= 2;
				res = ((res % modulo) + (cal(vt) % modulo)) % modulo;
				vt[i] = vt[i] * 2 + 1;
				vt[j] = vt[j] * 2 + 1;
			}
			else if(vt[i] % 2 == 0 && vt[j] % 2 == 1){
				vt[i] /= 2;
				vt[j] /= 2;
				res = ((res % modulo) + (cal(vt) % modulo)) % modulo;
				vt[i] = vt[i] * 2;
				vt[j] = vt[j] * 2 + 1;
			}
			else if(vt[i] % 2 == 1 && vt[j] % 2 == 0){
				vt[i] /= 2; 
				vt[j] /= 2;
				res = ((res % modulo) + (cal(vt) % modulo)) % modulo;
				vt[i] = vt[i] * 2 + 1;
				vt[j] = vt[j] * 2;
			}
			else if(vt[i] % 2 == 0 && vt[j] % 2 == 0){
				vt[i] /= 2; 
				vt[j] /= 2;
				res = ((res % modulo) + (cal(vt) % modulo)) % modulo;
				vt[i] = vt[i] * 2;
				vt[j] = vt[j] * 2;
			}
		}
	}
	dp[i_vt[0]][i_vt[1]][i_vt[2]][i_vt[3]][i_vt[4]] = res;
	return res;
}

int main()
{
	memset(id, -1, sizeof(id)) ;
	memset(dp, -1, sizeof(dp)) ;
	cin >> n ;
	dp[0][0][0][0][0] = 1;
	id[0] = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> vt[i] ;
	}
	cout << cal(vt) ;
}

