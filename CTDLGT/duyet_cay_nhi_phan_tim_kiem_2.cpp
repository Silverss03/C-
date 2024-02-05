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

void post_order(node *root)
{
	if(root == NULL)
	{
		return ;
	}
	int x = root -> data ;
	post_order(root -> left) ;
	post_order(root -> right) ;
	cout << x << " " ;
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
		
		post_order(root) ;
		cout << endl ;
	}
}

