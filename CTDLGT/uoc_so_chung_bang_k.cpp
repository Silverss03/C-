#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 5;
int n, k, a[N], res;

int GCD(int a, int b){
    if(b == 0) return a ;
    return GCD(b, a % b) ;
}

bool check(int len){
    for(int i = 1; i + len - 1 <= n; i++){
        int tmp = a[i];
        for(int j = i+1; j <= i+len-1; j++){
            tmp = GCD(tmp, a[j]);
        }
        if(tmp == k) return true;
    }
    return false;
}

int main(){
    int tests;
    cin >> tests;
    while(tests--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        int lo = 1, hi = n, ans = -1;
        while(lo <= hi){
            int mid = (lo + hi) / 2;
            if(check(mid)){
                ans = mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        if(ans == -1) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
