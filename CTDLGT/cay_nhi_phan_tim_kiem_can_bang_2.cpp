#include <iostream>
#include <algorithm>
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

node* createBST(int arr[], int start, int end)
{
	if(start > end) return NULL ;
	int mid = (start + end)/2 ;
	node* root = new node(arr[mid]) ;
	root -> left = createBST(arr, start, mid - 1) ;
	root -> right = createBST(arr, mid + 1, end) ;
	return root ; 	
}

void preorder(node *root)
{
	if(root == NULL) return ;
	cout << root -> data << " " ;
	if(root -> left) preorder(root -> left) ;
	if(root -> right) preorder(root -> right) ;
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
		for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
		sort(arr, arr + n) ;
		node *root = createBST(arr, 0, n - 1) ;
		preorder(root) ;
		cout << endl ;
	}
}

