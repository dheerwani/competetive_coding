#include<bits/stdc++.h>

using namespace std;

int fast_exponent(int n,int m)
{
	int ans{1};

	while(m>0)
	{
		int last = (m&1);
		if(last)
		{
			ans =ans*n;
		}
		n = n*n;
		m = m>>1;
	}

	return ans;
}


int main()
{
	int n{};
	cin>>n;

	int m{};
	cin>>m;

	cout<<fast_exponent(n,m);
}