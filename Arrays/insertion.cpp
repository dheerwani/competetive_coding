#include<iostream>
using namespace std;

void insertion_sort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int m=a[i];
		int j=i-1;

		while(j>=0 and a[j]>m)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = m;
	}
}

int main()
{

	int a[5] = {4,2,8,1,3};

	insertion_sort(a,5);

	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ,";
	}

	return 0;
}