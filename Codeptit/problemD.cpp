#include <bits/stdc++.h>
using namespace std ;

bool cmp(pair<string, pair<int,int>> a, pair<string, pair<int,int>> b){
	if(a.second.first != b.second.first) return a.second.first > b.second.first ;
	else if( a.second.second != b.second.second) return a.second.second > b.second.second ;
	else return a.first < b.first ;
}
int main(){
	map<string, pair<int,int>> mp ;
	vector<pair<string, pair<int,int>>> vt ;
	string s ;
	while(getline(cin,s)){
		pair <int, int> point ;
		string teamA = "", teamB = "";
		int i = 1, scoreA = 0, scoreB = 0 ;
		while(s[i] != ']'){
			teamA += s[i] ;
			i++ ;
		}
		i += 2 ;
		while(s[i] != ' '){
			scoreA = scoreA * 10 + (int)(s[i] - 48) ;
			i++ ;
		}
		i += 3 ;
		while(s[i] != ' '){
			scoreB = scoreB * 10 + (int)(s[i] - 48) ;
			i++ ;
		}
		i += 2 ;
		while(s[i] != ']'){
			teamB += s[i] ;
			i++ ;			
		}
		if(mp.count(teamA) == 0) mp[teamA].first = mp[teamA].second = 0 ;
		if(mp.count(teamB) == 0) mp[teamB].first = mp[teamB].second = 0 ;
		if(scoreA > scoreB) mp[teamA].first += 3 ;
		else if(scoreA < scoreB) mp[teamB].first += 3 ;
		else{
			mp[teamA].first += 1 ;
			mp[teamB].first += 1 ;
		}
		mp[teamA].second += scoreA - scoreB ;
		mp[teamB].second += scoreB - scoreA ;
	}
	for(auto x : mp) vt.push_back(x) ;
	sort(vt.begin(),vt.end(),cmp) ;
	for(auto x : vt){
		cout << x.first << " " << x.second.first << " " << x.second.second  << endl ;
	}
}
