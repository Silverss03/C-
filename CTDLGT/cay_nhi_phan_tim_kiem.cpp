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
	string s ;
	getline(cin, s) ;

	while(s != "\n")
	{
		int n ;
		n = s[0] -'0' ;
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

		if(isPerfect(root, 0)) cout << "Yes" ;
		else cout << "No" ;
		cout << endl ;
	
	}
}

