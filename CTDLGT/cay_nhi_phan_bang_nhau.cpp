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

bool isIdentical(node* r1, node* r2)
{
	if(r1 == NULL && r2 == NULL)
		return 1 ;
	if(r1 && r2)
	{
		if(isIdentical(r1 -> left, r2 -> left) && (r1 -> data == r2 -> data) && isIdentical(r1 -> right, r2-> right)) 
			return 1 ;
		return 0 ;
	}
	return 0 ;
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
		node *root1 = NULL ;

		// Read the input and insert nodes into the binary tree
		while(n--)
		{
			int n1, n2 ;
			char c ;
			cin >> n1 >> n2 >> c ; 

			// If the tree is empty, create a new root node with the value of n1 and the new node as its left or right child depending on the value of c
			if(root1 == NULL)
			{
				root1 = new node(n1) ;
				if(c == 'L') root1 -> left = new node(n2) ;
				else root1 -> right = new node(n2) ;
			}		
			else insert(root1, n1, n2, c) ; // Otherwise, insert the new node into the binary tree
		}		
			
		cin >> n ;
		node *root2 = NULL ;

		// Read the input and insert nodes into the binary tree
		while(n--)
		{
			int n1, n2 ;
			char c ;
			cin >> n1 >> n2 >> c ; 

			// If the tree is empty, create a new root node with the value of n1 and the new node as its left or right child depending on the value of c
			if(root2 == NULL)
			{
				root2 = new node(n1) ;
				if(c == 'L') root2 -> left = new node(n2) ;
				else root2 -> right = new node(n2) ;
			}		
			else insert(root2, n1, n2, c) ; // Otherwise, insert the new node into the binary tree
		}		
		// Print the nodes of the binary tree in level order
		if(isIdentical(root1, root2)) cout << "1" ;
		else cout << "0" ;
		cout << endl ;
	}
}

