int Solution::divide(int A, int B) {
    long long int a=A,b=B;
    int sign=0;
    if((a>0 && b<0) || (a<0 && b>0)) sign =1;
    if(a<0) a= -a;
    if(b<0) b= -b;
    long long int ans=0;
    long long int temp=0;
    for(int i=31;i>=0;i--)
    {
        if(temp + (b<<i)<=a)
        {
            temp+=(b<<i);
            ans+=1ll<<i;
        }
    }
    if(sign==1) ans=-ans;
    if(ans>INT_MAX || ans<INT_MIN) return INT_MAX;
    return ans;
}