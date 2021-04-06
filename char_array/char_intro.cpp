#include <iostream>
using namespace std;

void readline(char a[],int max_len)
{
	int i=0;
	char ch = cin.get();
	while(ch!='\n')
	{
		a[i] = ch;
		i++;
		if(i == (max_len-1))
			break;
		ch = cin.get();
	}
	a[i] = '\0';
	return;
}


int main()
{
	// char a[] = {'a','b','c'}; // takes garbage value as well 
	// char b[] ={"abc"};

	// char c[1000];
	// cin>>c;// will take input until space occurs
	// cout<<c<<endl; 

	// cout<<a<<" "<<sizeof(a)<<endl;
	// cout<<b<<" "<<sizeof(b)<<endl;

	char d[1000];
	// readline(d,1000);
	cin.getline(d,1000,'$');
	cout<<d;


	return 0;
}