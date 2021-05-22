#include<bits/stdc++.h>
#define ll long long int
int Solution::solve(int A, vector<int> &B) {
    if(A<3)
        return 0;
    // int sum = accumulate(B.begin(),B.end(),0);
    int n=A;
    ll prefix[A];
    prefix[0] = B[0];
    for(int i=1;i<n;i++)
    {
        prefix[i] = prefix[i-1]+B[i];
    }
    if(prefix[n-1]%3 != 0)
        return 0;
    
    ll oneThirdSum = prefix[n-1]/3;
    ll twoThirdSum = 2 * (prefix[n-1]/3);
    
    int ans{};
    int cnt=0;
    
    for(int i=0;i<n-1;i++)
    {
        if(prefix[i] == twoThirdSum)
        {
            ans+=cnt;
        }
        if(prefix[i] == oneThirdSum)
        {
            cnt++;
        }
    }
    
    return ans;
    
}
