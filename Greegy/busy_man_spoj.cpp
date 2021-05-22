#include<bits/stdc++.h>
using namespace std;


bool cmp(pair<int,int> a,pair<int,int> b)
{
	return a.second<b.second;
}

int main()
{
	int t{};
	cin>>t;
	while(t--)
	{
		vector<pair<int,int>> v;
		int n{};
		cin>>n;

		for(int i=0;i<n;i++)
		{
			int s{},e{};
			cin>>s>>e;
			v.push_back({s,e});
		}

		sort(v.begin(),v.end(),cmp);

		int ans=1;
		int f =v[0].second;

		for(int i=1;i<n;i++)
		{
			if(v[i].first>= f)
			{
				ans++;
				f = v[i].second;
			}
		}
		cout<<ans<<endl;
	}
}