#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r,c;
	cin>>r>>c;

	int a[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	int suffsum[r][c];
	suffsum[r-1][c-1] = a[r-1][c-1];
	for(int i=r-2;i>=0;i--)
	{
		suffsum[i][c-1] = suffsum[i+1][c-1] + a[i][c-1];
	}
	for(int i=c-2;i>=0;i--)
	{
		suffsum[r-1][i] = suffsum[r-1][i+1] + a[r-1][i];
	}

	for(int i=r-2;i>=0;i--)
	{
		for(int j=c-2;j>=0;j--)
		{
			suffsum[i][j] = suffsum[i][j+1] + suffsum[i+1][j] - suffsum[i+1][j+1] + a[i][j];
		}
	}

	int result = INT_MIN;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			result = max(result,suffsum[i][j]);
		}
	}

	cout<<endl<<result;
	return 0;
}