vector<int> Solution::nextPermutation(vector<int> &A) {
    int n=A.size();
    if(n == 1)
        return A;
    int i=n-2;
    
    while(i>=0 && A[i]>A[i+1])
    {
        i--;
    }
    if(i<0)
    {
        sort(A.begin(),A.end());
        return A;
    }
    
    swap(A[i],A[n-1]);
    sort(A.begin()+i+1,A.end());
    return A;
}
