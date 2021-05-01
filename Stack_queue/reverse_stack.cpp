#include<bits/stdc++.h>
using namespace std;

stack<int> s;

void insert_at_last(int a)
{
	if(s.empty())
	{
		s.push(a);
	}
	else
	{
		int temp=s.top();
		s.pop();
		insert_at_last(a);

		s.push(temp);
	}
}

void solve()
{
	if(s.empty())
	{
		return;
	}
	int a=s.top();
	s.pop();
	solve();
	insert_at_last(a);
}


int main()
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int temp{};
		cin>>temp;
		s.push(temp);
	}

	solve();
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
	return 0;
}