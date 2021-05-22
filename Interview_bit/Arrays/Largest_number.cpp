bool cmp(string a,string b)
{
    return a+b>b+a;
}

string Solution::largestNumber(const vector<int> &A) {
    if(A.size() == 0)
        return "";
    int zcount{};
    for(auto a:A)
    {
        if(a == 0)
            zcount++;
    }
    
    if(zcount == A.size())
    {
        return "0";
    }
    vector<string> v;
    for(int i=0;i<A.size();i++)
    {
        v.push_back(to_string(A[i]));
    }
    
    sort(v.begin(),v.end(),cmp);
    
    string ans;
    for(auto a:v)
    {
        ans+=a;
    }
    
    return ans;
}
