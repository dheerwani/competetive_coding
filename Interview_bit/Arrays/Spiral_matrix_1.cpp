vector<int> Solution::spiralOrder(const vector<vector<int> > &a) {
    int sr=0;
    int er=a.size() -1;
    int sc=0;
    int ec=a[0].size()-1;
    vector<int> ans;
    while(sr<=er && sc<=ec)
    {
        for(int i=sc;i<=ec;i++)
        {
            ans.push_back(a[sr][i]);
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            ans.push_back(a[i][ec]);
        }
        ec--;
        if(sr<=er)
        {
        for(int i=ec;i>=sc;i--)
        {
            ans.push_back(a[er][i]);
        }
        er--;
        }
        if(sc<=ec)
        {
        for(int i=er;i>=sr;i--)
        {
            ans.push_back(a[i][sc]);
        }
        sc++;
        }
    }
    return ans;
}
