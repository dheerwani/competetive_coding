vector<int> Solution::plusOne(vector<int> &A) {
    
    if(A.size()==1 && A[0] == 0)
    {
        A[0]=1;
        return A;
    }
        
    int i=0;
    for(auto a: A)
    {
        if(a == 0)
            i++;
        if(a != 0)
            break;
    }
    vector<int> temp(A.begin()+i,A.end());
    // for(auto a:temp)
    //     cout<<a;
    reverse(temp.begin(),temp.end());
    temp[0] = temp[0]+1;
    int rem{};
    if(temp[0]>=10)
    {
        int i=1;
        rem=temp[0]/10;
        temp[0] = temp[0]%10;
        
        while(i<temp.size() &&rem!=0)
        {
            temp[i] = temp[i] + rem;
            rem = temp[i]/10;
            temp[i] = temp[i]%10;
            i++;
        }
        
        if(rem!=0)
        {
            temp.push_back(rem);
        }
    }
    
    reverse(temp.begin(),temp.end());
    return temp;
    
}
