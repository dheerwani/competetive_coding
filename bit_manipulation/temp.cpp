#include<bits/stdc++.h>
using namespace std;

bool cowscan(int stalls[],int n,int cows,int sep)
{
	int last_cow=stalls[0];
	int count=1;

	for(int i=1;i<n;i++)
	{
		if((stalls[i] - last_cow) >= sep)
		{
			last_cow = stalls[i];
			count++;
			if(count == cows)
			{
				return true;
			}

		}
	}

	return false;
}

int main()
{
	int t{};
	cin>>t;
	while(t--)
	{
		int n{};
		int c{};
		cin>>n>>c;

		int stalls[n];
		for(int i=0;i<n;i++)
		{
			cin>>stalls[i];
		}
		sort(stalls,stalls+n);
		int l=0;
		int r=stalls[n-1]-stalls[0];
		int ans{};
		while(l<=r)
		{
			int mid = (l+r)/2;

			bool val =cowscan(stalls,n,c,mid);
			if(val)
			{
				ans=mid;
				l=mid+1;
			}
			else
			{
				r=mid-1;
			}
		}
		cout<<ans<<endl;
	}
}