#include<bits/stdc++.h>
using namespace std;

string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void solve(char inp[],char op[],int i,int j)
{
	if(inp[i] == '\0')
	{
		op[j]='\0';
		cout<<op<<endl;
		return;
	}

	int digit = inp[i] - '0';
	// if(digit == 0)
	// {
	// 	op[j] = ' ';
	// 	solve(inp,op,i+1,j+1);
	// } 

	for(int k=0;k<table[digit].length();k++)
	{
		op[j] = table[digit][k];

		solve(inp,op,i+1,j+1);
	}
	return;
}
int main() {
	char inp[100];
	cin>>inp;
	char op[1000];
	solve(inp,op,0,0);
	return 0;
}