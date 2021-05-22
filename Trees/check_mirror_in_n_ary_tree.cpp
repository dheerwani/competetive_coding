//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
        vector<stack<int>> f(n+1);
        vector<queue<int>> s(n+1);
        
        for(int i=0;i<(2*e);i+=2)
        {
            f[A[i]].push(A[i+1]);
            s[B[i]].push(B[i+1]);
        }
        
        for(int i=1;i<=n;i++)
        {
            
            while(!f[i].empty() && !s[i].empty())
            {
                int a = f[i].top();
                int b = s[i].front();
                
                if(a!=b)
                    return 0;
                
                f[i].pop();
                s[i].pop();
            }
        }
        
        return 1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        
        cin>>n>>e;
        int A[2*e], B[2*e];
        
        for(int i=0; i<2*e; i++)
            cin>>A[i];
            
        for(int i=0; i<2*e; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.checkMirrorTree(n,e,A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends