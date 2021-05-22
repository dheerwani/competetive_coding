/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 bool cmp(Interval a,Interval b)
 {
     return a.start<b.start;
 }
 
 bool isMerge(Interval a,Interval b)
{
    return a.end >= b.start;
}

Interval doMerge(Interval a,Interval b)
{
    a.end = max(a.end,b.end);
    return a;
}

vector<Interval> Solution::merge(vector<Interval> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end(),cmp);
    vector<Interval> ans;
    Interval prev = A[0];
    int n=A.size();
    for(int i=1;i<n;i++)
    {
        Interval curr = A[i];
        if(isMerge(prev,curr))
        {
            prev = doMerge(prev,curr);
        }
        else
        {
            ans.push_back(prev);
            prev=curr;
        }
    }
    ans.push_back(prev);
    return ans;
}


