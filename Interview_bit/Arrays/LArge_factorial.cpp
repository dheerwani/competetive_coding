string Solution::solve(int A) {
    int arr[1000000]={0};
    arr[0]=1;
    int len=0;
    int rem{};
    int j=0;
    for(int i=2;i<=A;i++)
    {
        while(j<=len)
        {
            arr[j] = arr[j]*i + rem;
            rem = arr[j]/10;
            arr[j] = arr[j]%10;
            j++;
        }
        j=0;
        while(rem!=0)
        {
            len++;
            arr[len] = rem%10;
            rem=rem/10;
        }
    }
    
    string ans;
    for(int i=len;i>=0;i--)
    {
        ans = ans + to_string(arr[i]);
    }
    
    return ans;
}
