#include<bits/stdc++.h>
using namespace std;

bool isPossible(int a[],int n,int p,int time)
{
	int num=0;

	for(int i=0;i<n;i++)
	{
		int t=0;
		int nex_time=a[i];
		while( t + nex_time <=time)
		{
			num++;
			t+=nex_time;
			nex_time+=a[i];
			if(num>=p)
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

	int p{};
	cin>>p;

	int n{};
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	
	int s=0;
	int e=a[n-1]*p*(p+1)/2;
	int ans{};
	while(s<=e)
	{
		int mid = (s+e)/2;
		if(isPossible(a,n,p,mid))
		{
			ans=mid;
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}


	}
	cout<<ans<<endl;
}
}