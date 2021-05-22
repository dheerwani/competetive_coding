/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &v, Interval add) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int start = add.start;
    int end = add.end;
    int i{};
    int n=v.size();
    if(n==0)
    {
        v.push_back(add);
        return v;
    }
    if(v[0].start > end)
    {
        vector<Interval> ans;
        ans.push_back(add);
        for(auto a:v)
            ans.push_back(a);
        return ans;
    }
    
    if(v[0].start == end)
    {
        v[0].start = start;
        return v;
    }
    for(i=0;i<n;i++)
    {
        if(v[i].end >= start)
        {
            break;
        }
    }
    if(i == n)
    {
        v.push_back(add);
        return v;
    }
    int j{};
    for(j=i+1;j<n;j++)
    {
        if(end <= v[j].start)
        {
            break;
        }
    }
    j--;
    vector<Interval> ans;
    if(v[i-1].end < start && end < v[i].start)
    {
            for(int j=0;j<i;j++)
            {
                ans.push_back(v[j]);
            }
            ans.push_back(add);
            for(int j=i;j<n;j++)
            {
                ans.push_back(v[j]);
            }
            return ans;
    }
    v[i].end = max(end,v[j].end);
    v[i].start=min(start,v[i].start);
    for(int x=0;x<n;x++)
    {
        if(x>i && x<=j)
        {
            continue;
        }
        ans.push_back(v[x]);
    }
    
    return ans;
}

// Also there is a method to sort and solve 