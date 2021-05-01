#include<bits/stdc++.h>
using namespace std;

void Long_suff(string pat,int *lhs,int m)
{
	lhs[0]=0;
	int len=0;
	int i=1;

	while(i<m)
	{
		if(pat[len] == pat[i])
		{
			len++;
			lhs[i]=len;
			i++;
		}
		else
		{
			if(len!=0)
			{
				len =lhs[len-1];
			}
			else
			{
				lhs[i]=0;
				i++;
			}
		}
	}
	cout<<"Length of substring which suffix as well as prefix	"<<lhs[m-1]<<endl; // Gives the longest substring which is suffix and prefix
}

void KMP(string txt,string pat)
{
	int n=txt.length();
	int m=pat.length();
	int lhs[m];
	Long_suff(pat,lhs,m);
	int i=0;
	int j=0;

	while(i<n)
	{
		if(pat[j] == txt[i])
		{
			i++;
			j++;
		}

		if(j==m)
		{
			cout<<"index at"<<i-j;
			j=lhs[j-1];
		}
		else if(i<n && pat[j]!=txt[i])
		{
			if(j!=0)
			{
				j=lhs[j-1];
			}
			else
			{
				i=i+1;
			}
		}
	}
}

int main()
{
	string txt,pat;
	cin>>txt>>pat;

	KMP(txt,pat);
}