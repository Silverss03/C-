#include <bits/stdc++.h>
using namespace std ;

long long RBG(int num, int r, int b, int g)
{
    vector<long long int> v(num + 1);
    v[0] = 1;
    for (int i = 1; i <= num; i++)
        v[i] = v[i - 1] * i;
    int start = num - (r + g + b);
    long long int sum = 0;
    for (int i = 0; i <= start; i++)
    {
        for (int j = 0; j <= start - i; j++)
        {
            int k = start - (i + j);
            sum = sum + v[num] /(v[i + r] * v[j + b] * v[k + g]);
        }
    }
    return sum;
}
int main() {
	int tests;
	cin >> tests;
	while (tests--) {
		int num, r, g, b;
		cin >> num >> r >> b >> g;
        cout << RBG(num, r, b, g) << endl;
	}
}
