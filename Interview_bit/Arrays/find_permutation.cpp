vector<int> Solution::findPerm(const string A, int B) {
    vector<int> ans;
    int x=1;
    int y=B;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='D')
        {
            ans.push_back(y);
            y--;
        }
        else
        {
            ans.push_back(x);
            x++;
        }
    }
    
    for(int i=x;i<=y;i++)
    {
        ans.push_back(i);
    }
    return ans;
}
