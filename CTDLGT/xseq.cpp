#include <bits/stdc++.h>
using namespace std;

long long INF = LLONG_MAX;
long long a[1000005], F_max[1000005];

int main()
{
    long long n, s, max_F = -INF, curr_max = 0;
    cin >> n >> s;
    
    for (int i = 1; i <= n; i++) {
        long long tmp;
        cin >> tmp;
        tmp *= s;
        curr_max = max(tmp, curr_max + tmp);
        max_F = max(max_F, curr_max);
    }

    cout << max_F;
}

