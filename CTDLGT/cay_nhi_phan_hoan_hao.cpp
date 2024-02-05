#include <bits/stdc++.h>
using namespace std;

// A structure to represent a node in a binary tree
struct node{
	int data ;
	node *left, *right ;
	node(int x)
	{
		data = x  ;
		left = right = NULL ;
	}
};

int n;

bool isPerfect(struct node* root, int level)
{
	queue<node*> qu;
	qu.push(root) ;
	int s = 0 , l = 0 ;
	while(!qu.empty())
	{
		s = qu.size() ;
		if(s != int(pow(2, l))) return false ;
		for(int i = 0 ; i < s ; i++)
		{
			node *t = qu.front() ;
			qu.pop() ;
			if(t -> left)
				qu.push(t -> left) ;
			if(t -> right)
				qu.push(t -> right) ;  
		}
		l++ ;
	}
	return true ;
}

// Function to insert a new node into a binary tree
void insert(node *root, int n1, int n2, char c)
{
	if(root == NULL) return ; // base case

	// If the current node matches n1, insert the new node as its left or right child depending on the value of c
	if(root -> data == n1)
	{
		if(c == 'L') root -> left = new node(n2) ;
		else root -> right = new node(n2) ;
	}
	else
	{
		// Recursively call insert on the left and right subtrees
		insert(root -> left, n1, n2, c) ;
		insert(root -> right, n1, n2, c) ;
	}
} 

int main()
{
	int tests ;
	cin >> tests ;

	// Process each test case
	while(tests--)
	{
		cin >> n ;
		node *root = NULL ;

		// Read the input and insert nodes into the binary tree
		while(n--)
		{
			int n1, n2 ;
			char c ;
			cin >> n1 >> n2 >> c ; 

			// If the tree is empty, create a new root node with the value of n1 and the new node as its left or right child depending on the value of c
			if(root == NULL)
			{
				root = new node(n1) ;
				if(c == 'L') root -> left = new node(n2) ;
				else root -> right = new node(n2) ;
			}		
			else insert(root, n1, n2, c) ; // Otherwise, insert the new node into the binary tree
		}		

		// Print the nodes of the binary tree in level order
		if(isPerfect(root, 0)) cout << "Yes" ;
		else cout << "No" ;
		cout << endl ;
	}
}

