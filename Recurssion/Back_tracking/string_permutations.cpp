#include<bits/stdc++.h>
using namespace std;

void solve(char* input,int i)
{
	if(input[i] == '\0')
	{
		cout<<input<<" ";
		return;
	}

	for(int j=i;input[j]!='\0';j++)
	{
		swap(input[i],input[j]);
		solve(input,i+1);
		swap(input[i],input[j]);//here we have done backtracking and restored the input which was changed above
	}
}

int main()
{
	char input[100];
	cin>>input;

	solve(input,0);
	return 0;
}