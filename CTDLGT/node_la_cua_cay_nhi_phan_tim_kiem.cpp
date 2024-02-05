#include <iostream>
using namespace std;

struct node{
	int data ;
	node *left, *right ; 
	node(int x)
	{
		data = x ; 
		left = right = NULL ;
	}
};

void insert(node* &root, int x)
{
	if(root == NULL)
	{
		root = new node(x) ;
		return ;
	}
	else
	{
		if(root -> data > x)
		{
			insert(root -> left, x) ;
		}
		else
		{
			insert(root -> right, x) ;
		}
	}
}

void leaf(node *root)
{
	if(root == NULL)
	{
		return ;
	}
	if(!root -> left && !root -> right)
	{
		cout << root->data << " " ;
	}
	leaf(root -> left) ;
	leaf(root -> right) ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n ; 
		cin >> n ; 
		int arr[n] ;
		node *root = NULL ; 
		
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		
		for(int i = 0 ; i < n ; i++)
		{
			insert(root, arr[i]) ;
		}
		
		leaf(root) ;
		cout << endl ;
	}
}

