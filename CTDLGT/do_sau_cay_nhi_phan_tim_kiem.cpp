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

int res = 0, n, arr[1002] ; 

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

void count(node *root, int lev)
{
	res = max(res, lev) ;
	if(root == NULL)
	{
		return ;
	}
	count(root -> left, lev + 1) ;
	count(root -> right, lev + 1) ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		res = 0 ;
		cin >> n ; 
		node *root = NULL ; 
		
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		
		for(int i = 0 ; i < n ; i++)
		{
			insert(root, arr[i]) ;
		}
		
		count(root, 0) ;
		cout << res - 1 << endl ;
	}
}

