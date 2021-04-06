vector<vector<int> > fourSum(vector<int> &arr, int k) {
    // Your code goes here
    int n=arr.size();
    vector<vector<int>> ans;
    set<vector<int>> s;
    
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            int sum = k - arr[i] -arr[j];
            int l=j+1;
            int r=n-1;
            while(l<r)
            {
                if( arr[l] + arr[r] == sum)
                {
                    s.insert({arr[i],arr[j],arr[l],arr[r]});
                    l++;
                    r--;
                }
                else if (arr[l]+arr[r] < sum)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
    }
    for(auto a:s)
    {
        ans.push_back(a);
    }
    return ans;
}