#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string s)
{
    // your code here
    int cnt1{},cnt2{};
    int n=s.length();
    
    for(int i=0;i<n;i++)
    {
        if(i%2 == s[i] - '0')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
    }
    
    return n - max(cnt1,cnt2);
}