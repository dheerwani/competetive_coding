#include <iostream>
#include <cstring>
using namespace std;
#continuous occuring
void remove_dup(char a[])
{
	int l=strlen(a);
	if(l==0 or l==1)
		return;

	int prev=0;
	for(int curr=1;curr<l;curr++)
	{
		if(a[curr] != a[prev])
		{
			prev++;
			a[prev] =a[curr];
		}
	}
	a[prev+1] = '\0';
}

int main()
{
	char a[1000];
	cin.getline(a,1000);
	remove_dup(a);
	cout<<a;

	return 0;
}