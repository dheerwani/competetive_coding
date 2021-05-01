#include<iostream>
using namespace std;

void tower_of_hanoi(int n,char source,char dest,char aux)
{
	if(n==1)
	{
		cout<<"Moving ring 1 from "<<source<<" to "<<dest<<endl;
	}
	return;
	tower_of_hanoi(n-1,source,aux,dest);
	cout<<"Moving ring "<<n<<" from "<<source<<" to "<<dest<<endl;
	tower_of_hanoi(n-1,aux,dest,source);
}

int main() {
	int n{};
	cin>>n;
	tower_of_hanoi(n,'A','B','C');
	return 0;
}