#include<bits/stdc++.h>
using namespace std;
string extracting(string a,int key)
{
	char *ptr = strtok((char *)a.c_str()," ");
	while(key>1)
	{
		ptr = strtok(NULL," ");
		key--;
	}
	return string(ptr);
}

int convertoInt(string k)
{
	int ans=0;
	int p=1;
	for(int i=k.length()-1;i>=0;i--)
	{
		ans += ((k[i] - '0')*p);
		p = p*10;
	}
	return ans;
}

bool numericcomp(pair<string,string> s1,pair<string,string> s2)
{
	string key1,key2;
	key1= s1.second;
	key2 =s2.second;

	return convertoInt(key1) < convertoInt(key2);
}

bool Lexicomp(pair<string,string> s1,pair<string,string> s2)
{
	string key1,key2;
	key1= s1.second;
	key2 =s2.second;

	return key1<key2;
}

int main() {
	int n{};
	cin>>n;
	cin.get();

	string s[n];
	for(int i=0;i<n;i++)
	{
		getline(cin,s[i]);
	}
	int key;
	string reverse;
	string comp;
	cin>>key>>reverse>>comp;


	pair<string,string> strp[n];
	for(int i=0;i<n;i++)
	{
		strp[i].first = s[i];
		strp[i].second = extracting(s[i],key);
	}
	
	if(comp == "numeric")
	{
		sort(strp,strp+n,numericcomp);
	}
	else
	{
		sort(strp,strp+n,Lexicomp);	
	}


	if(reverse == "true")
	{
		for(int i=0;i<n/2;i++)
		{
			swap(strp[i],strp[n-i-1]);
		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<strp[i].first<<endl;
	}

	return 0;
}