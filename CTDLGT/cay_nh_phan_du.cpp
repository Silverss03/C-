#include <bits/stdc++.h>
using namespace std;

struct node{
	int data ;
	node *left, *right ;
	node(int x)
	{
		data = x  ;
		left = right = NULL ;
	}
};

bool isFullTree(node* root)
{
	if(!root) return true ;
	if(!root -> left && !root -> right)
		return true ;
	node *r, *l ;
	r = root -> right ;
	l = root -> left ;
	if(r && l)
	{
		if(isFullTree(l)&&isFullTree(r)) return true ;		
	}
	return false; 
}

void insert(node *root, int n1, int n2, char c)
{
	if(root == NULL) return ; 

	if(root -> data == n1)
	{
		if(c == 'L') root -> left = new node(n2) ;
		else root -> right = new node(n2) ;
	}
	else
	{
		insert(root -> left, n1, n2, c) ;
		insert(root -> right, n1, n2, c) ;
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
		node *root = NULL ;

		while(n--)
		{
			int n1, n2 ;
			char c ;
			cin >> n1 >> n2 >> c ; 

			if(root == NULL)
			{
				root = new node(n1) ;
				if(c == 'L') root -> left = new node(n2) ;
				else root -> right = new node(n2) ;
			}		
			else insert(root, n1, n2, c) ; 
		}		

		if(isFullTree(root)) cout << "YES\n" ;
		else cout << "NO\n" ;
	}
}

