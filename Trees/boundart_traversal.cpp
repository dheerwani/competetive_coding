#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


vector <int> printBoundary(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}



int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);

        vector <int> res = printBoundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends


/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
void leftr(Node* root,vector<int> &ans)
{
    if(root==NULL) return;
    if(root->left)
    {
        ans.push_back(root->data);
        leftr(root->left,ans);
    }
    else if(root->right)
    {
        ans.push_back(root->data);
        leftr(root->right,ans);
    }
}

void leaf(Node* root,vector<int> &ans)
{
    if(root==NULL) return;
    if(root->left)
    {
        leaf(root->left,ans);
    }
    if(root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
    }
    if(root->right)
    {
        leaf(root->right,ans);
    }
}

void rightr(Node* root,vector<int> &ans)
{
    if(root==NULL) return;
    if(root->right)
    {
        rightr(root->right,ans);
        ans.push_back(root->data);
    }
    else if(root->left)
    {
        rightr(root->left,ans);
        ans.push_back(root->data);
    }
}
vector <int> printBoundary(Node *root)
{
     //Your code here
     vector<int> ans;
     ans.push_back(root->data);
     leftr(root->left,ans);
     leaf(root,ans);
     rightr(root->right,ans);
     return ans;
}