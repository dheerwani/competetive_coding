#include<bits/stdc++.h>
using namespace std;

bool solve(char input[10][10],int ans[][10],int i,int j,int m,int n)
{
	if(i==m && j==n)
	{
		ans[m][n] =1;
		for(int k=0;k<=m;k++)
		{
			for(int l=0;l<=n;l++)
			{
				cout<<ans[k][l]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}

	if(i>m || j>n)
	{
		return false;
	}
	if(input[i][j] == 'X')
	{
		return false;
	}

	ans[i][j] = 1;

	bool rightside = solve(input,ans,i,j+1,m,n);
	bool downside = solve(input,ans,i+1,j,m,n);

	ans[i][j] = 0;
	if(rightside || downside)
	{
		return true;
	}
	return false;
}

int main()
{
	char input[10][10] = {
					"0000",
					"00X0",
					"000X",
					"0X00"
	};
	int m=4,n=4;
	int ans[10][10] ={0};

	if(!solve(input,ans,0,0,m-1,n-1))
	{
		cout<<"No path exists"<<endl;
	}

	return 0;
}