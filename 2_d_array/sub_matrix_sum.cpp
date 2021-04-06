#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n][n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	for(int l1 =0;l1<n;l1++)
	{
		for(int l2=0;l2<n;l2++)
		{
			for(int r1=l1;r1<n;r1++)
			{
				for(int r2=l2;r2<n;r2++)
				{
					
					for(int i=l1;i<=r1;i++)
					{
						for(int j=l2;j<=r2;j++)
						{
							sum+=a[i][j];
						}
					}
	
				}
			}
		}
	}
	cout<<sum<<endl;
	return 0;

}