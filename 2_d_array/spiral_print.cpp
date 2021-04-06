#include<bits/stdc++.h>
using namespace std;

void SpiralPrint(int a[][1000],int m,int n)
{
	int strtrow=0;
	int endrow=m-1;
	int strtcol =0;
	int endcol=n-1;

	while(endrow>=strtrow and endcol>=strtcol)
	{
	for(int i=strtcol;i<=endcol	;i++)
	{
		cout<<a[strtrow][i]<<" ";
	}
	strtrow++;

	for(int i=strtrow;i<=endrow;i++)
	{
		cout<<a[i][endcol]<<" ";
	}
	endcol--;

	if(endrow>=strtrow)
	{
	for(int i=endcol;i>=strtcol;i--)
	{
		cout<<a[endrow][i]<<" ";
	}
	endrow--;
	}

	if(strtcol<=endcol)
	{
	for(int i=endrow;i>=strtrow;i--)
	{
		cout<<a[i][strtcol]<<" ";
	}
	strtcol++;
	}
	}
}


int main()
{
	int m,n;
	cin>>m>>n;
	int a[1000][1000]={0};

	int val=1;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		
		}
		cout<<endl;
	}
	SpiralPrint(a,m,n);
}