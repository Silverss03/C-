#include <iostream>
#include <stack>
using namespace std;

struct node{
	char data ;
	node *left, *right ;
	node(char x)
	{
		data = x ;
		left = NULL ;
		right = NULL ;	
	}
};

void read(node* root)
{
	if(root!= NULL)
	{
		read(root -> left) ;
		cout << root->data << " " ;
		read(root -> right) ;
	}
}

int main()
{
	int tests ;
	cin >> tests ;
	while(tests--)
	{
		string s ;
		cin >> s ;
		stack<node*> st;
		for(int i = 0 ; i < s.length() ; i++)
		{
			if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			{
				node* root = NULL;
				root = new node(s[i]) ;
				node* r1 = st.top() ;
				st.pop() ; 
				node* r2 = st.top() ;
				st.pop() ;
				root -> left = r2 ;
				root -> right = r1;
				st.push(root) ; 
			}
			else
			{
				node *root = new node(s[i]) ;
				st.push(root) ; 
			}
		}
		
		if(!st.empty())node *root = st.top() ;
		read(root) ;
		cout << endl ;
	}
}

