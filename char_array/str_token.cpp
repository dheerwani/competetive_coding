#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
	// to be used with character array 
	char s[100] = "Hello i am dheer wani";

	char *ptr = strtok(s," ");

	cout<<ptr<<endl;

	while(ptr!=NULL)
	{
		ptr=strtok(NULL," ");
		cout<<ptr<<endl;
	}

	return 0;
}