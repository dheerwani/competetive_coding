#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}



int main()
{

	int a[5] = {4,2,8,1,3};

	bubble_sort(a,5);

	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ,";
	}

	return 0;
}