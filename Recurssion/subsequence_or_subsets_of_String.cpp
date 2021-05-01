#include<bits/stdc++.h>
using namespace std;

void solve(string s,string o,int i)
{
	int n=s.length();
	if(n==i)
	{
		cout<<o<<" ";
		return;
	}

	solve(s,o+s[i],i+1);
	solve(s,o,i+1);
}

int main()
{
	string s;
	cin>>s;
	string o="";
	solve(s,o,0);

	return 0;
}