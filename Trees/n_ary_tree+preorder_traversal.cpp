/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
         vector<int> ans;
         vector<Node*> check;
        if(root == NULL)
        {
            return ans;
        }
        
        if(root->children.size() == 0)
        {
            ans.push_back(root->val);
            
            return ans;
        }
       
        // cout<<root->children.size();
        stack<Node *> s;
        ans.push_back(root->val);
        check.push_back(root);
        s.push(root);
        
        while(s.empty() == false )
        {
            int flag=0;
            
            Node* curr = s.top();
            
            for(int i=0;i<curr->children.size();i++)
            {
                if(find(check.begin(),check.end(),curr->children[i]) == check.end())
                {
                    flag=1;
                    ans.push_back(curr->children[i]->val);
                    check.push_back(curr->children[i]);
                    s.push(curr->children[i]);
                    break;
                }
            }
            
            if(flag == 0)
            {
                s.pop();
            }
        }
        return ans;
    }
};