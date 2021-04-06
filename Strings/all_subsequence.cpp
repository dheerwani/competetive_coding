#include<bits/stdc++.h>
using namespace std;

void subseq(string input,string output)
{
	if(input.empty())
	{
		cout<<output<<endl;
		return;
	}

	subseq(input.substr(1),output + input[0]);

	subseq(input.substr(1),output);
}


int main()
{
	string s;
	cin>>s;

	subseq(s,"");

	return 0;
}