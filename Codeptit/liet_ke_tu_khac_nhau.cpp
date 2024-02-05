#include <bits/stdc++.h>
using namespace std ;

int main() {
	fstream infile;
	string s;
	set<string> S;
	infile.open("VANBAN.in");
	while (infile>>s) {
		for (int j = 0; j < s.length(); j++)
			s[j] = tolower(s[j]);
		S.insert(s);
	}
	for (auto i = S.begin(); i != S.end(); i++) {
		cout << *i << endl;
	}
	infile.close();
}
