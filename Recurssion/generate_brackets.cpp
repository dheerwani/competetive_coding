#include<bits/stdc++.h>
using namespace std;

void Generate(int n,int cnt,int open,int close,string op)
{
	if(cnt== (2*n))
	{
		cout<<op<<endl;
		return;
	}

	if(open<n)
	{
		Generate(n,cnt+1,open+1,close,op+"(");
	}

	if(close<open)
	{
		Generate(n,cnt+1,open,close+1,op+")");
	}
	 
}

int main()
{
	int n{};
	cin>>n;

	Generate(n,0,0,0,"");

	return 0;
}