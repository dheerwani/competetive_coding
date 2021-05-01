#include<bits/stdc++.h>
using namespace std;

char key[][10] = {" "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void solve(char *input,char *output,int i,int j)
{
	if(input[i]=='\0')
	{	
		output[j] == '\0';
		cout<<output<<endl;
		return;
	}

	int digit =input[i] - '0';
	
	if(digit == 0 || digit==1)
	{
		solve(input,output,i+1,j);
	}
	for(int k=0;key[digit][k] != '\0';k++)
	{
		// cout<<key[digit][k]<<endl;
		output[j] = key[digit][k];

		solve(input,output,i+1,j+1);
	}

	return;
}


int main()
{
	char input[1000];
	cin>>input;

	char output[1000];

	solve(input,output,0,0);

	return 0;
}