#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k,s;
	cin>>n>>m>>k>>s;
	char a[n][m];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}

	bool flag=1;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			char c=a[i][j];

			if(s<k)
			{
				flag=0;
				break;
			}
			else if(c == '.')
			{
				s-=2;
			}
			else if(c =='*')
			{
				s+=5;
			}
			else
			{
				break;
			}
			if(j != m-1)
			{
				s--;
			}
		}
		if(flag == 0)
			break;
	}
	if(flag==0)
		cout<<"No";
	else
		cout<<"Yes"<<endl<<s;

	return 0;
}