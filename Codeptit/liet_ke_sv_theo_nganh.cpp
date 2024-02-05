#include <bits/stdc++.h>
using namespace std ;

class SinhVien {
private:
	string name, grade, id, email;
public:
	SinhVien() {
		name = grade = id = email = "";
	}
	friend istream& operator>>(istream& in, SinhVien&);
	friend ostream& operator<<(ostream& out, SinhVien);
};
int t = 0;
istream& operator>>(istream& in, SinhVien& x) {
	getline(in, x.name);
	getline(in, x.grade);
	getline(in, x.id);
	getline(in, x.email);
	return in;
}
ostream& operator<<(ostream& out, SinhVien x) {
	out << x.name << " " << x.grade << " " << x.id << " " << x.email << endl;
	return out;
}

int main() {
	SinhVien ds[1000];
	int num; 
	cin >> num;
	cin.ignore();
	for (int i = 0; i < num; i++)cin >> ds[i];
	int tests; 
	cin >> tests;
	cin.ignore();
	while (tests--) {
		string major; 
		getline(cin, major);
		string token; for (int i = 0; i < major.length(); i++)token.push_back(toupper(major[i]));
		cout << "DANH SACH SINH VIEN NGANH " << token << ":" << endl;
		for (int i = 0; i < n; i++) {
			if (ds[i].major[5] == s[0]) {
				if ((major[0] == 'K' || major[0] == 'V' || major[0] == 'D'))cout << ds[i];
				else if (ds[i].id[0] != 'E')cout << ds[i];
			}
		}
	}
}
