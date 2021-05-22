//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int i=0;
    Node* solve(int *in,int *pre,int s,int e)
    {
        
        
        if(s>e) return NULL;
        
        Node* root = new Node(pre[i]);
        
        int index{};
        for(int j=s;j<=e;j++)
        {
            if(in[j] == pre[i])
            {
                index = j;
                break;
            }
        }
        i++;
        root->left = solve(in,pre,s,index-1);
        root-> right = solve(in,pre,index+1,e);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        return solve(in,pre,0,n-1);
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends