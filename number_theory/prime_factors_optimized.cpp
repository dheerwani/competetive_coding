#include<bits/stdc++.h>
using namespace std;

void prime_fact(int n)
{
	vector<pair<int,int>> fact;

	for(int i=2;i*i<n;i++)
	{
		if(n%i == 0)
		{
			int cnt=0;
			while(n%i == 0)
			{
				n = n/i;
				cnt++;
			}
			fact.push_back(make_pair(i,cnt));
		}
	}

	if(n!=1)
	{
		fact.push_back(make_pair(n,1));
	}

	for(auto a:fact)
	{
		cout<<a.first<<"^"<<a.second<<endl;
	}
}


int main()
{
	int n{};
	cin>>n;
	prime_fact(n);


	return 0;
}