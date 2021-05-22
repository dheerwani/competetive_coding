#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


#define ll long long
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<int> left;
        vector<int> right;
        
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty() && arr[s.top()]>=arr[i])
            {
                s.pop();
            }
            
            if(s.empty())
            {
                left.push_back(-1);
            }
            else
            {
                left.push_back(s.top());
            }
            s.push(i);
        }
        
        stack<int> ss;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!ss.empty() && arr[ss.top()]>=arr[i])
            {
                ss.pop();
            }
            
            if(ss.empty())
            {
                right.push_back(n);
            }
            
            else
            {
                right.push_back(ss.top());
            }
            ss.push(i);
        }
        reverse(right.begin(),right.end());
        
        ll area{INT_MIN};
        
        for(int i=0;i<n;i++)
        {
            ll curr = (right[i] - left[i] - 1) * arr[i];
            area = max(area,curr);
        }
        return area;
    }
};

auto speedup = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends