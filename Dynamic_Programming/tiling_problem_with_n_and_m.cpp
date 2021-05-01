#include<iostream>
#define ll long long int
using namespace std;
int mod = 1000000007;

ll solve(ll n,ll m)
{
	ll dp[n+1];

	for(int i=1;i<=n;i++)
	{
		if(i<m)
		{
			dp[i] =1;
		}
		else if(i==m)
		{
			dp[i] = 2;
		}
		else
		{
			dp[i] = ((dp[i-1]%mod) + (dp[i-m]%mod))%mod;
		}

		
	}
	return dp[n]%mod;
}

int main() {
	int t{};
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		cout<<solve(n,m)<<endl;
	}
	return 0;
}