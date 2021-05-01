#include<iostream>
using namespace std;

int binary_search(int a[],int key,int start,int end)
{
	if(start>end)
		return -1;
	int mid = (start+end)/2;

	if(a[mid] == key)
	{
		return mid;
	}
	else if(a[mid] < key)
	{
		return binary_search(a,key,mid+1,end);
	}
	else
	{
		return binary_search(a,key,start,mid-1);
	}

	return -1;

}


int main()
{
	int n{};
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	int key;
	cin>>key;
	cout<<binary_search(a,key,0,n-1);
	return 0;
}