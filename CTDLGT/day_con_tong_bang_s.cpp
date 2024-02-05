#include <bits/stdc++.h>
using namespace std;

bool count(vector<int>& vt, int n, int sum) {
    vector<bool> dp(sum + 1, false);
    dp[0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = sum; j >= vt[i]; j--) {
            dp[j] = dp[j] || dp[j - vt[i]];
        }
    }
    return dp[sum];
}

int main() {
    int tests;
    cin >> tests;
    while (tests--) {
        int n, sum;
        vector<int> vt(202);
        cin >> n >> sum;
        for (int i = 0; i < n; i++) cin >> vt[i];
        if (count(vt, n, sum))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

