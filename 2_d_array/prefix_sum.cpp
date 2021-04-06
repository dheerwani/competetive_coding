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

	int psum[r][c];
	psum[0][0] = a[0][0];
	for(int i=1;i<c;i++){
		psum[0][i] = psum[0][i-1] + a[0][i];
	}
	for(int i=1;i<r;i++)
	{
		psum[i][0] = psum[i-1][0] + a[i][0];
	}

	for(int i=1;i<r;i++){
		for(int j=1;j<c;j++){
			psum[i][j] = psum[i-1][j] + psum[i][j-1] - psum[i-1][j-1] + a[i][j];
		}
	}

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<psum[i][j]<<" ";
		}
		cout<<"\n";

	}

	return 0;
}