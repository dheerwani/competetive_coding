#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define prime 3

ll calculateHash(string s,int n)
{
	ll ans=0;

	for(int i=0;i<n;i++)
	{
		ans+= (ll)s[i] * (ll)pow(prime,i);
	}

	return ans;
}

ll recalulateHash(string s,int oldIndex,int newIndex,ll hash,int patlen)
{
	ll ans=0;
	ans+=hash- s[oldIndex];
	ans/=prime;
	ans+= s[newIndex]* (ll)pow(prime,patlen-1);

	return ans;
}

bool checkifequal(string s1,string s2,int start1,int end1,int start2,int end2)
{
	if(end1-start1 != end2-start2)
		return false;

	while(start1<=end1 && start2<=end2)
	{
		if(s1[start1]!=s2[start2])
		{
			return false;
		}
		start1++;
		start2++;
	}

	return true;
}


int main()
{
	string str,pat;
	cin>>str>>pat;
	int n=str.size();
	int m=pat.size();

	ll hashstr = calculateHash(str,m);
	ll hashpat = calculateHash(pat,m);

	for(int i=0;i<=n-m;i++)
	{
		if(hashstr == hashpat && checkifequal(str,pat,i,i+m-1,0,m-1))
		{
			cout<<i;
		}
		else
		{
			hashstr = recalulateHash(str,i,i+m,hashstr,m);
		}
	}


	return 0;
}