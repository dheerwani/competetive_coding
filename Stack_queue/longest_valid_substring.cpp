// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for c++
// #include<bits/stdc++.h>
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int> st;
        st.push(-1);
        int count =0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
            {
                st.push(i);
                continue;
            }
            else
            {
                if(st.empty())
                    continue;
                st.pop();
                if(!st.empty())
                {
                    count = max(count , i -st.top());
                }
                else
                {
                    st.push(i);
                }
            }
        }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends