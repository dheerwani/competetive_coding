#include<bits/stdc++.h>
using namespace std;// U can take only 1,2,3 jumps to reach the top ,so in how many ways u can reach the TOP??
// here we can take k steps eg k=4 ,we can do 1,2,3,4 jumps to reach destina
int solve(int n,int k)
{
	if(n==0)
	{
		return 1;
	}
	if(n<0)
		return 0;

	int ans=0;
	for(int i=1;i<=k;i++)
	{
		ans+=solve(n-i,k);
	}

	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n{},k{};
	cin>>n>>k;


	cout<<solve(n,k);
	return 0;
}