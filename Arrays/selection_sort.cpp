#include<iostream>
using namespace std;

void selection_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		swap(a[i],a[min]);
	}
}

int main()
{

	int a[5] = {4,2,8,1,3};

	selection_sort(a,5);

	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ,";
	}

	return 0;
}