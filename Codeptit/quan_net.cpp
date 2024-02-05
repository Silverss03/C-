#include <bits/stdc++.h>
using namespace std;

class net{
	string user, pass, name, in, out ;
	int time = 0, h = 0, m = 0; 
	public :
		void input(){
			int time1 = 0, time2 = 0,hour1 = 0, hour2 = 0;
			getline(cin, user) ;
			getline(cin, pass) ;
			getline(cin, name) ;
			getline(cin, in) ;
			getline(cin, out) ;
			for(int i = 0 ; i < 2 ; i++) hour1 = hour1 * 10 + (int)(in[i] - 48);
			for(int i = 0 ; i < 2 ; i++) hour2 = hour2 * 10 + (int)(out[i] - 48) ;			
			for(int i = 3 ; i < 5 ; i++) time1 = time1 * 10 + (int)(in[i] - 48);
			for(int i = 3 ; i < 5 ; i++) time2 = time2 * 10 + (int)(out[i] - 48) ;
			time = 60 - time1 + 60*(hour2 - hour1 - 1) + time2 ;
			h = time / 60 ;
			m = time % 60 ;
		}
		void output(){
			cout << user << " " << pass << " " << name << " " << h << " gio " << m <<  " phut "<< endl;
		}
		friend bool cmp(net a, net b) ;
};

bool cmp(net a, net b){
	if(a.time == b.time) return a.user < b.user ;
	return a.time > b.time ;
}

int main(){
	int num ;
	cin >> num ;
	cin.ignore() ;
	net a[num] ;
	for(int i = 0 ; i < num ; i++){
		a[i].input() ;
	}
	sort(a, a + num, cmp) ;
	for(int i = 0 ; i < num ; i++) a[i].output() ;
}
