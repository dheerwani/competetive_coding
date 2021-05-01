#include<bits/stdc++.h>
using namespace std;

void insertpi(char *a,int i)
{
	if(a[i] == '\0' && a[i+1] == '\0')
		return;

	if(a[i] == 'p' && a[i+1] == 'i')
	{
		int j=i+2;

		while(a[j]!='\0')
		{
			j++;
		}

		while(j>=i+2)
		{
			a[j+2] = a[j];
			j--;
		}

		a[i] ='3';
		a[i+1] ='.';
		a[i+2] = '1';
		a[i+3] = '4';

		insertpi(a,i+4);
		}
	else
	{
		insertpi(a,i+1);
	}
}

int main()
{
	char a[1000];
	cin>>a;
	// cout<<a;

	insertpi(a,0);
	cout<<a;


	return 0;
}