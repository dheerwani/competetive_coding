#include<bits/stdc++.h>
using namespace std;

unordered_map<int,string> mp;

void to_spell(int n)
{
	if(n==0)
		return;
	int t = n%10;
	to_spell(n/10);
	cout<<mp[t]<<" ";
}

int main()
{
	mp[1]="one";
	mp[2]="two";
	mp[3]="three";
	mp[4]="four";
	mp[5]="five";
	mp[6]="six";
	mp[7]="seven";
	mp[8]="eight";
	mp[9]="nine";
	mp[0]="zero";

	int n{};
	cin>>n;
	to_spell(n);
	return 0;
}