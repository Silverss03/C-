#include <iostream>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        string s;
        cin >> s;
        if (s[0] == '0')
            cout << 0 << endl;
        else
        {
            int n = s.length();
            int dp[n + 1];
            dp[0] = 1;
            for (int i = 1; i < n; i++)
            {
                dp[i] = 0;
                if (s[i] != '0')
                    dp[i] = dp[i - 1];
                if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] < '7'))
                {
                	if(i >= 2)
                		dp[i] += dp[i - 2] ;
                	else 
                		dp[i]++ ;
                }
            }
            cout << dp[n - 1] << endl;
        }
    }
}

