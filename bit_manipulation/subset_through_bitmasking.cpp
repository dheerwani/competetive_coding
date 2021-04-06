#include<bits/stdc++.h>
using namespace std;

void subseq(char a[],int i)
{
	int j=0;
	while(i>0)
	{
		int last_bit=(i&1);
		if(last_bit == 1)
		{
			cout<<a[j];
		}
		j++;
		i=i>>1;
	}
	cout<<endl;
}


void printsub(char a[])
{
	int n=strlen(a);
	for(int i=0;i<(1<<n);i++)
	{
		subseq(a,i);
	}
}

int main()
{
	char a[100];
	cin>>a;

	printsub(a);
	return 0;
}