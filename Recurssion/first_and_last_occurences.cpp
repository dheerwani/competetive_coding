#include<iostream>
using namespace std;

int first_occ(int a[],int n,int key)
{
	if(n==0)
	{
		return -1;
	}

	if(a[0] == key)
	{
		return 0;
	}
	int i = first_occ(a+1,n-1,key);
	if(i==-1)
		return -1;

	return i+1;
}

int last_occ(int a[],int n,int key)
{
	if(n==0)
	{
		return -1;
	}

	int g=last_occ(a+1,n-1,key);
	if(g == -1)
	{
		if(a[0] == key)
			return 0;
		else
			return -1;
	}
	return g+1;
}

void all_occ(int a[],int i,int n,int key)
{
	if(n==i)
	{
		return;
	}

	if(a[i] == key)
	{
		cout<<i<<" ";
	}

	all_occ(a,i+1,n,key);
}

int main()
{
	int n{};
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int key{}; cin>>key;
	// cout<<first_occ(a,n,key)<<endl;
	// int c{}; cin>>c;
	// cout<<last_occ(a,n,c)<<endl;

	all_occ(a,0,n,key);
	return 0;
}