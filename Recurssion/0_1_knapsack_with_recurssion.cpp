#include<bits/stdc++.h>
using namespace std;

int solve(int n,int c,int *weights,int *profit)
{
	int ans{};
	if(n==0 || c==0)
	{
		return 0;
	}
	int inc{},exc{};
	if(weights[n-1] <=c)
	{
		inc= profit[n-1] + solve(n-1,c- weights[n-1] ,weights,profit);
	}

	exc= solve(n-1,c,weights,profit);
	ans=max(inc,exc);
	return ans;
}




int main()
{
	int weights[]= {1,2,3,5};
	int profit[] = {40,20,30,100};
	int n=4;
	int c=7;
	cout<<solve(n,c,weights,profit)<<endl;
	return 0;
}