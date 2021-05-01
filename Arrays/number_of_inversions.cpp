#include<bits/stdc++.h>
using namespace std;
int merging(int a[],int temp[],int left,int right);
int mergee(int a[],int temp[],int left,int mid,int right);

int merge_sort(int a[],int size)
{
	int temp[size];
	return merging(a,temp,0,size-1);
}

int merging(int a[],int temp[],int left,int right)
{
	int mid,inv_cnt=0;

	if(left<right)
	{
		mid = (left+right)/2;

		inv_cnt+=merging(a,temp,left,mid);
		inv_cnt+=merging(a,temp,mid+1,right);

		inv_cnt+=mergee(a,temp,left,mid+1,right);
	}

	return inv_cnt;
}

int mergee(int a[],int temp[],int left,int mid,int right)
{
	int i,j,k;
	int inv_cnt=0;

	i=left;
	j=mid;
	k=left;

	while((i<=mid-1) && (j<=right))
	{
		if(a[i] <= a[j])
		{
			temp[k++] = a[i++];
		}
		else
		{
			temp[k++] = a[j++];
			inv_cnt+= (mid-i);
		}
	}

	while(i<=mid-1)
	{
		temp[k++] = a[i++];
	}

	while(j<=right)
	{
		temp[k++] = a[j++];
	}

	for(int z=left;z<=right;z++)
	{
		a[z]=temp[z];
	}

	return inv_cnt;
}

int main()
{
	int n{};
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	int ans = merge_sort(a,n);
	cout<<ans;

return 0;
}