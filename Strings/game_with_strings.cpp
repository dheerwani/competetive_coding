//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        int hash[26] = {0};
        
        for(auto a:s)
        {
            hash[a - 'a'] ++;
        }
        
        priority_queue<int> pq;
        
        for(int i=0;i<26;i++)
        {
            if(hash[i]!=0)
                pq.push(hash[i]);
        }
        
        while(!pq.empty() && k>0)
        {
            int f = pq.top();
            pq.pop();
            pq.push(f - 1);
            k--;
        }
        int ans{};
        while(!pq.empty())
        {
            int f = pq.top();
            pq.pop();
            ans+=(f*f);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}  // } Driver Code Ends