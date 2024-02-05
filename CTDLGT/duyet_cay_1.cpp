#include <iostream>
#include <map>
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

int n, in[1002], pre[1002] ;
map<int, int> mp ;

node* build(int start, int end, int &preIndex, map<int, int> mp)
{
	if(start > end)
		return NULL ;
	node* root = new node(pre[preIndex++]) ;
	if(start == end) return root;
	int inIndex = mp[root -> data] ;
	root -> left = build(start, inIndex - 1, preIndex, mp) ;
	root -> right = build(inIndex + 1, end, preIndex, mp) ;
	return root ;
}

void print(node* root)
{
	if(root == NULL) return ;
	print(root -> left) ;
	print(root -> right) ;
	cout << root -> data << " " ;
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		cin >> n ;
		for(int i = 1 ; i <= n ; i++)
		{
			cin >> in[i] ;
			mp[in[i]] = i ;
		}
		for(int i = 1 ; i <= n ; i++)
		{
			cin >> pre[i] ;
		}
		node *root = NULL;
		int preIndex = 1;
		root = build( 1, n, preIndex, mp) ;
		print(root) ;
		cout << endl ;
	}
}

