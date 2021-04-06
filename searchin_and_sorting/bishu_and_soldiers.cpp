#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n{};
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	int r{};
	cin>>r;
	sort(a,a+n);

	int prefix[n];
	prefix[0]=a[0];
	for(int i=1;i<n;i++)
	{
		prefix[i] = prefix[i-1]+a[i];
	}
	// for(int i=0;i<n;i++) cout<<prefix[i]<<" ";
	for(int i=0;i<r;i++)
	{
		int pow{};
		cin>>pow;
		// cout<<pow;
		int l=0;
		int r=n-1;
		int ans{};
		while(l<=r)
		{
			int mid = (l+r)/2;

			if(a[mid]<=pow)
			{
				l=mid+1;
				ans=mid+1;
			}
			else
			{
				r=mid-1;
			}
		}
		cout<<ans<<" "<<prefix[ans-1]<<endl;
	}
}
