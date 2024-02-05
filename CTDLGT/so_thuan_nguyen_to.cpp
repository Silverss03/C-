#include <bits/stdc++.h>
using namespace std;

bool prime(int num){
    if (num < 2)
        return 0;
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

bool cs(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int tmp = num % 10;
        if (tmp != 2 && tmp != 3 && tmp != 5 && tmp != 7)
            return 0;
        sum += tmp;
        num /= 10;
    }
    if (prime(sum))
        return 1;
    return 0;
}

int main()
{
    int T;
    cin >> T;
    while (T--){
	    int a, b, res = 0;
	    cin >> a >> b;
	    for (int i = a; i <= b; ++i)
	    {
	        if (prime(i) && cs(i))
	            res++;
	    }
	    cout << res << endl;
	}
    return 0;
}
