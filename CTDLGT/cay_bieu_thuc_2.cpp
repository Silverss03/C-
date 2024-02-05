#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
using namespace std;

struct node{
	string data ;
	node* left ;
	node* right ;
	node(string x)
	{
		data = x ;
		left = right = NULL ;	
	}
};

int n;
		
void insert(node* &root, vector<string> vt, int level)
{
	if(level < n)
	{
		root = new node(vt[level]);
		insert(root -> left, vt, 2*level + 1) ;
		insert(root -> right, vt, 2*level + 2) ;
	}	
}

int cal(node* root)
{
	if(!root) return 0 ;
	if(!root->left && !root->right)
	{
		stringstream ss(root -> data) ;
		int tmp ;
		ss >> tmp ;
		return tmp ;	
	}
	if(root -> data == "+")
	{
		return (cal(root -> left) + cal(root -> right)) ;
	}
	else if(root -> data == "-")
	{
		return (cal(root -> left) - cal(root -> right)) ;
	}
	else if(root -> data == "*")
	{
		return (cal(root -> left) * cal(root -> right)) ;
	}
	else
	{
		return (cal(root -> left) / cal(root -> right)) ;
	}
}
int main()
{
	int tests ;
	cin >> tests; 
	while(tests--)
	{
		cin >> n ;
		cin.ignore() ;
		string s, token ;
		getline(cin, s) ;
		stringstream ss(s) ;
		node *root = NULL ;
		vector<string> vt ;
		
		while(ss >> token)
		{
			vt.push_back(token) ;
		}
		
		insert(root, vt, 0) ;
		cout << cal(root) << endl ;
	}
}

