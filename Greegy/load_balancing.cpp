#include<bits/stdc++.h>
using namespace std;


int main()
{
	while(1)
	{
		int n{};
		cin>>n;

		if(n==-1)
			break;

		int load{};
		int max_load{};
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			load+=arr[i];
		}

		if(load%n != 0)
		{
			cout<<-1<<endl;
			continue;
		}

		load = load/n;

		int diff=0;

		for(int i=0;i<n;i++)
		{
			diff+=(arr[i] - load);
			int ans = max(diff , -diff);
			max_load = max(max_load,ans);
		}

		cout<<max_load<<endl;


	}
}