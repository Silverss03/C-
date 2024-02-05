#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int times;
	cin >> times;
	while (times--) {
		long long n, a;
		vector<int> m(1000);
		cin >> n >> a;
		int j = 0;
		while (a) {
			int x = a % 10;
			if (x == 9) {
				m[j++] = 7; m[j++] = 3; m[j++] = 3; m[j++] = 2;
			}
			else if (x == 8) {
				m[j++] = 2; m[j++] = 2; m[j++] = 2; m[j++] = 7;
			}
			else if (x == 7 || x == 5 || x == 3 || x == 2) m[j++] = x;
			else if (x == 4) {
				m[j++] = 2; m[j++] = 2; m[j++] = 3;
			}
			else if (x == 6) {
				m[j++] = 5; m[j++] = 3;
			}
			a /= 10;
		}
		sort(m.begin(), m.end());

		for (int i = 1000-1; i >=1000-j; i--)
			cout << m[i];
		cout << endl;
	}
}
