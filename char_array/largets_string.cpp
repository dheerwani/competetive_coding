#include <iostream>
#include <cstring>
using namespace std;


int main()
{

	int n;
	cin>>n;

	cin.get();

	int max=0;
	char largest[1000];

	char a[1000];
	for(int i=0;i<n;i++)
	{
		cin.getline(a,1000);
		int c = strlen(a);

		if(c>max)
		{
			max=c;
			strcpy(largest,a);
		}
	}

	cout<<largest <<" and " <<max;


	return 0;
}