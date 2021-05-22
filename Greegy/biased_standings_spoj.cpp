#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t{};
	cin>>t;

	while(t--)
	{
		ll n{};
		cin>>n;
		ll arr[1000000]={0};

		for(ll i=0;i<n;i++)
		{
			string s;
			ll r{};
			cin>>s>>r;
			arr[r]++;
		}

		ll actual_rank=1;
		ll ans{};

		for(ll i=1;i<=n;i++)
		{
			while(arr[i])
			{
				ans+= abs(i- actual_rank);
				actual_rank++;
				arr[i]--;
			}
		}
		cout<<ans<<endl;
	}
}