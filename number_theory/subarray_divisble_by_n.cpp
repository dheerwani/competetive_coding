#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll pre[100005];
int main()
{
	int t{};
	cin>>t;

	while(t--)
	{
		int n{};
		cin>>n;
		memset(pre,0,sizeof(pre));
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			sum+=temp;
			sum%=n;
			sum = (sum+n)%n;
			pre[sum]++;
		}
		ll ans{};
		for(int i=0;i<n;i++)
		{
			int m=pre[i];
			ans+= m * (m-1)/2;
		}
		cout<<ans<<endl;

	}
	return 0;
}