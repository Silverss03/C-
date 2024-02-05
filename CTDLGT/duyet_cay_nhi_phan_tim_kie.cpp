#include <iostream>
using namespace std;

struct node{
	int data ;
	node* left ;
	node* right ;
	node(int x)
	{
		data = x ; 
		left = right = NULL ;
	}
};

void insert(node* &root, int i)
{
	if(root == NULL) root = new node(i);
	else
	{
		if(i < root-> data) insert(root -> left, i) ;
		else insert(root -> right , i) ;
	}
}

void preorder(node *root)
{
	if(root == NULL) return ;
	int x = root->data ;
	cout << x << " " ;
	preorder(root->left) ;
	preorder(root->right) ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		int n; 
		cin >> n ;
		int arr[1002] ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> arr[i] ;
		}
		node *root = NULL ;
		for(int i = 0 ; i < n ; i++)
		{
			insert(root, arr[i]) ;
		}
		preorder(root) ;
		cout << endl ;
	}
}

