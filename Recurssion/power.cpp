#include<iostream>
using namespace std;

int powerr(int a,int n)
{
	if(n==0)
		return 1;

	return a * powerr(a,n-1);
}

int fast_power(int a,int n)
{
	if(n==0)
		return 1;

	int ans = fast_power(a,n/2);
	ans*=ans;

	if(n&1)
	{
		return ans * a;
	}
	else
	{
		return ans;
	}
}

int main()
{
	int a{},n{};
	cin>>a>>n;

	cout<<powerr(a,n)<<endl;
	cout<<fast_power(a,n);
	return 0;
}