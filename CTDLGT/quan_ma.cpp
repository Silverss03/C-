#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int row[8] = {-2, -2, 2, 2, -1, -1, 1, 1} ;
int col[8] = {-1, 1, -1, 1, -2, 2, -2, 2} ;
int check[10][10] ;

struct cell{
	int r, c, dis = 0 ;
};

bool movable(int r, int c)
{
	if(r >= 1 && r <= 8 && c >= 1 && c <= 8) return true ;
	return false ;

}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int res = 1e9;
		memset(check, 0, sizeof(check)) ;
		string tmp ;
		cell start, end ;
		cin >> tmp;
		start.r = (int)(tmp[0] - 'a') + 1;
		start.c = (int)(tmp[1] - '0') ;
		start.dis = 0 ;
		check[start.r][start.c] = 1 ;
		cin >> tmp ; 
		end.r = (int)(tmp[0] - 'a') + 1;
		end.c = (int)(tmp[1] - '0') ;
		queue<cell> qu ;
		qu.push(start) ;
		while(!qu.empty())
		{
			cell tmp = qu.front() ;
			qu.pop() ;
			
			if(tmp.r == end.r && tmp.c == end.c)
			{
				//cout << "ad\n" ;
				res = min(res, tmp.dis) ;
			}
			
			for(int i = 0 ; i < 8 ; i++)
			{
				cell c ;
				c.r  = tmp.r + row[i] ;
				c.c  = tmp.c + col[i] ;
				c.dis = tmp.dis + 1; 
				if(movable(c.r, c.c) && check[c.r][c.c] == 0)
				{
					check[c.r][c.c] = 1 ;
					qu.push(c) ; 
				}
			}	
		} 
		cout << res << endl ;
	}	
}

