#include <iostream>
#include <cstring>
using namespace std;

struct object
{
    int val, weight ;     
};

int main()
{
    int tests ; 
    cin >> tests ; 
    while(tests--)
    {
        int n, v, res = 0 ;
        cin >> n >> v ;
        object a[1002] ;
        int **dp = new int* [1002] ;
        for(int i = 0 ; i < 1002 ; i++) {
            dp[i] = new int[1002] ;
            memset(dp[i], 0, 1002 * sizeof(int)) ;
        }
        
        for(int i = 1 ; i <= n ; i++)
            cin >> a[i].weight ;
        for(int i = 1 ; i <= n ; i++)
            cin >> a[i].val ;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1; j <= v ; j++)
            {
                if(a[i].weight > j)
                    dp[i][j] = dp[i - 1][j] ;
                else
                {
                    dp[i][j] = max(dp[i-1][j], dp[i - 1][j - a[i].weight] + a[i].val) ;
                }
                res = max(dp[i][j], res) ;
            }
        }
        cout << res << endl ;
        for(int i = 0 ; i < 1002 ; i++)
            delete[] dp[i] ; 
        delete[] dp ;
    }
}
