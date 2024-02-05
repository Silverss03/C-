#include <iostream>
#include <set>
using namespace std;

struct node{
	int data ; 
	node *left, *right ; 
	node(int x)
	{
		data = x ; 
		left = NULL ; 
		right = NULL ;
	}
};

void insert(node* &root, int x, int y, char c)
{
	if(root == NULL) return ;
	if(root -> data == x)
	{
		if(c == 'L') root -> left = new node(y) ;
		else if(c == 'R') root -> right = new node(y) ;
	}
	else
	{
		insert(root -> left, x, y, c) ;
		insert(root -> right, x, y, c) ;	
	}	
}

void insert_s(node* &s_root, int x)
{
	if(s_root == NULL)
	{
		s_root = new node(x) ;
		return ;
	}
	else
	{
		if(s_root -> data > x)
		{
			insert_s(s_root -> left, x) ;
		}
		else
		{
			insert_s(s_root -> right, x) ;
		}
	}
}
int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n ; 
		cin >> n ;
		set<int> st ;
		node *root = NULL, *s_root = NULL ;
		while(n--)
		{
			int x, y ; 
			char pos ;
			cin >> x >> y >> pos ; 
			st.insert(x) ;
			st.insert(y) ;
			if(root == NULL)
			{
				root = new node(x) ;
				if(pos == 'L') root -> left = new node(y) ; 
				else if(pos == 'R') root -> right = new node(y) ;
			}
			else
			{
				insert(root, x, y, pos) ;
			}
		}
		
		for(auto x : st)
		{
			insert_s(s_root, x) ;
		}
	}
}

