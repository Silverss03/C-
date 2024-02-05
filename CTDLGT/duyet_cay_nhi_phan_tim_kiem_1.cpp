#include <bits/stdc++.h>
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

void insert(node* &root, int x)
{
	if(root == NULL)
	{
		root = new node(x) ;
		return ; 	
	}
	if(root -> data > x)
		insert(root -> left, x) ;
	if(root -> data < x) 
		insert(root -> right, x) ;	
}

void postorder(node* root)
{
	if(root == NULL) return ; 
	if(root -> left) postorder(root -> left) ;
	if(root -> right) postorder(root -> right) ;
	cout << root -> data << " " ;	
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
		node* root = NULL ;
		
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ; 
		
		for(int i = 0 ; i < n ; i++)
		{
			insert(root, arr[i]) ;
		}
		
		postorder(root) ;
		cout << endl ;
	}
}

