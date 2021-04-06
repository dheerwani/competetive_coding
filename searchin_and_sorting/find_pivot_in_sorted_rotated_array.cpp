#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(int);

	int l=0;
	int r=n-1;

	while(l<=r)
	{
		int mid = (l+r)/2;

		if( mid>l && arr[mid] < arr[mid-1])
		{
			cout<<mid-1;
			break;
		}
		if(mid<r && arr[mid] >arr[mid+1])
		{
			cout<<mid;
			break;
		}
		if(arr[l] >= arr[mid])
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}

	if(l>r)
	{
		cout<<"NO pivot element"<<endl;
	}
}