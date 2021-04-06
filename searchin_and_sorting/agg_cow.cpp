#include<bits/stdc++.h>
using namespace std;

bool iscowplaced(int stall[],int n,int c,int sep)
{
	int cnt=1;
	int lst_cow = stall[0];

	for(int i=1;i<n;i++)
	{
		if((stall[i] - lst_cow)>=sep)
		{
			lst_cow=stall[i];
			cnt++;
		
		if(cnt == c)
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

	int n{},c{};
	cin>>n>>c;
	while(t--)
	{
	int stall[n];
	for(int i=0;i<n;i++)
	{
		cin>>stall[i];
	}
	sort(stall,stall+n);

	int s=0;
	int e =1000000000;
	int ans{};
	while(s<=e)
	{
		int mid= (s+e)/2;
		bool check = iscowplaced(stall,n,c,mid);
		if(check)
		{
			ans=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	cout<<ans<<endl;
}
	return 0;
}