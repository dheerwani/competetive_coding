#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int a[n][m];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}

	int k;
	cin>>k;

	int j=m-1;
	int i=0;

	while(j>=0 && i<n)
	{
		if(a[i][j] == k)
		{
			cout<<"Index "<<i<<" "<<j;
			return 0;
		}
		else if(a[i][j] > k )
		{
			j--;
		}
		else
			i++;
	}
	cout<<"Not found";
	return 0;
}